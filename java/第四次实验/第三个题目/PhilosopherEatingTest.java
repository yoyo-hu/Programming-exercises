package homework4;

class Fork{
    /*初始为都未被用*/
    private boolean[] used={false,false,false,false,false,false};
    
    /*只有筷子未被使用时才允许获取筷子*/
    public Fork() {}
    public synchronized void takeFork(){
        String name = Thread.currentThread().getName();
        int i = Integer.parseInt(name);
        while(used[i]){
            try {
                wait();//如果左手正被使用，等待
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
        used[i ]= true;
        System.out.println("Philosopher "+name+" takes left fork");
        while(used[(i+1)%5]){
            try {
                wait();//如果右手正被使用，等待
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
        notifyAll();
        used[(i+1)%5]=true;
        System.out.println("Philosopher "+name+" takes right fork");
    }
    
    /*释放左右手的筷子*/
    public synchronized void putFork(){
        String name = Thread.currentThread().getName();
        int i = Integer.parseInt(name);
        
        used[i ]= false;
        System.out.println("Philosopher "+name+" puts left fork down.");
        notifyAll();
        used[(i+1)%5]=false;
        System.out.println("Philosopher "+name+" puts right fork down.");
        notifyAll();//唤醒其他线程
    }
}

class Philosopher implements Runnable{
	private Fork fork;
	public String philosopherNumber;
    public Philosopher(String philosopherNumber,Fork fork){
        this.philosopherNumber=philosopherNumber;
        this.fork=fork;
    }
    public void run(){
        fork.takeFork();
        eating();
        fork.putFork();
        thinking();
}


public void eating(){
    System.out.println("Philosopher "+philosopherNumber+" eats spaghetti.");
    try {
        Thread.sleep(1000);//模拟吃饭，占用一段时间资源
    } catch (InterruptedException e) {
        // TODO Auto-generated catch block
        e.printStackTrace();
    }
}


public void thinking(){
    System.out.println("Philosopher "+philosopherNumber+" thinks.");
    try {
    	Thread.sleep(1000);//模拟思考
    } catch (InterruptedException e) {
        // TODO Auto-generated catch block
        e.printStackTrace();
    }
}
}
public class PhilosopherEatingTest {
	public static void main(String[] args){
		Fork fork=new Fork();
        Thread philosopher1 = new Thread(new Philosopher("1",fork));
        philosopher1.setName("1");
        Thread philosopher2 = new Thread(new Philosopher("2",fork));
        philosopher2.setName("2");
        Thread philosopher3 = new Thread(new Philosopher("3",fork));
        philosopher3.setName("3");
        Thread philosopher4 = new Thread(new Philosopher("4",fork));
        philosopher4.setName("4");
        Thread philosopher5 = new Thread(new Philosopher("5",fork));
        philosopher5.setName("5");
        philosopher1.start();
        philosopher2.start();
        philosopher3.start();
        philosopher4.start();
        philosopher5.start();
	}
}
