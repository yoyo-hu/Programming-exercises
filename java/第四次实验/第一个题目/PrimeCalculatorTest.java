package homework4;

public class PrimeCalculatorTest {
public static class PrimeCalculator implements Runnable{
	private int lowerBound;//the lower bound of the range.
	private int upperBound;//the upper bound of the range.
	private int amount; //the amount of the prime numbers between [lowerBound, upperBound).
	public boolean ifCalcualate;//boolean, the flag indicating whether the result has been calculated.
	public PrimeCalculator(int lowerBound, int upperBound){
		this.lowerBound=lowerBound;
		this.upperBound=upperBound;
		amount=0;
		ifCalcualate=false;
	}//public, the constructor of the PrimeCalculator.
	public void run() {
		for(int i=lowerBound;i<upperBound;i++) {
			int flag=0;
			for(int j=2;j*j<=i;j++) {
				if(i%j==0){
					flag=1;
					break;
				}
			}
			if(flag==0)amount++;
		}
		ifCalcualate=true;
	} //void, which is inherited from the interface and shall be implemented.
	public int getAmount(){
		if(ifCalcualate==false)return -1;
		return amount;
	}//which returns the amount of the prime numbers when the result has been calculated, and returns -1 otherwise.

}
public static void main(String[] args){
int result = 0;
PrimeCalculator pc1 = new PrimeCalculator(1, 100000);
PrimeCalculator pc2 = new PrimeCalculator(100001, 200000);
PrimeCalculator pc3 = new PrimeCalculator(200001, 300000);
PrimeCalculator pc4 = new PrimeCalculator(300001, 400000);
Thread t1 = new Thread(pc1);
Thread t2 = new Thread(pc2);
Thread t3 = new Thread(pc3);
Thread t4 = new Thread(pc4);
result =pc1.getAmount()+ pc2.getAmount()+pc3.getAmount()+pc4.getAmount();
System.out.println("The amount of prime number from 1 to 400000 is : " +
String.valueOf(result));
t1.start();
t2.start();
t3.start();
t4.start();
try {
t1.join();
t2.join();
t3.join();
t4.join();
} 
catch (InterruptedException e){
e.printStackTrace();
}
result =pc1.getAmount()+ pc2.getAmount()+pc3.getAmount()+pc4.getAmount();
System.out.println("The amount of prime number from 1 to 400000 is : " +
String.valueOf(result));
}
}