package homework4;
import java.util.LinkedList;
import java.util.List;

public class TicketWindowTest {
	
	public static class TicketWindow implements Runnable{
		int windowNumber;//the index of the window
		public List<Integer> ticketList;
		public TicketWindow(int windowNumber, List<Integer> ticketList){
			this.windowNumber=windowNumber;
			this.ticketList=ticketList;
		}//public, the constructor of TicketWindow
		public void run(){
	        while(ticketList.size()>0){
	            //同步锁
	            synchronized(this.ticketList){
	                    	System.out.println("Window "+windowNumber+": Ticket "+ticketList.remove(0)+" is sold.");
					}
	            if(ticketList.size()>0) {
            		try {
                        Thread.sleep(100);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
				}
			}
		}
		
	}
	public static void main(String[] args){
		List<Integer> t = new LinkedList<>();
		for(int i=1;i<=20;i++) {
			t.add(i);
		}
	        Thread t1 = new Thread(new TicketWindow(1,t));
	        Thread t2 = new Thread(new TicketWindow(2,t));
	        Thread t3 = new Thread(new TicketWindow(3,t));
	        Thread t4 = new Thread(new TicketWindow(4,t));
	        t1.start();
	        t2.start();
	        t3.start();
	        t4.start();
	}
}
