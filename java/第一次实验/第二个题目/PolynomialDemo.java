//package text;
public class PolynomialDemo {
	public static class Polynomial{
		public double a;
		public double b;
		public double c;
		public Polynomial(){}
		public Polynomial(double a,double b,double c) {
			this.a=a;
			this.b=b;
			this.c=c;
		}
		public void setA(double a) {
			this.a=a;
		}
		public void setB(double b) {
			this.b=b;
		}
		public void setC(double c) {
			this.c=c;
		}
		public void showPolynomial(){
			System.out.println( "F(x)="+a+"x²+"+b+"x+"+c);
		}
		public double getY(double x) {
			return a*x*x+b*x+c;
		}
		public boolean hasSolution(double y) {
			if(b*b-4*a*(c-y)<0)
				return false;
			return true;
		}
		public void showSolution(double y) {
			if(!hasSolution(y)) {
				System.out.println("no solution");
			}
			else {
				double temp=b*b-4*a*(c-y);
				temp= Math.pow(temp,0.5);
				double x1=(-b+temp)/2/a;
				double x2=(-b-temp)/2/a;
				if(x1==x2) {
					System.out.println("solution:"+x1);
				}
				else {
					System.out.println("solution:"+x1+','+x2);
				}
			}
		}
	}
 public static void main(String[] args)
 {
 Polynomial f = new Polynomial(10,9,8);
 Polynomial f1 = new Polynomial(1, 0, 0);
 Polynomial f2 = new Polynomial(1, 0, 2);
 int[] tempArray = {0, 1, 3};
 // Set Method Test
 System.out.println("Set Method Test");
 f.showPolynomial();
 f.setA(-10);
 f.showPolynomial();
 f.setB(-1908);
 f.showPolynomial();
 f.setC(190908.87);
 f.showPolynomial();
 // F(x) Calculation Test
 System.out.println("\nCalculation Test");
 f1.showPolynomial();
 f2.showPolynomial();
 System.out.println("");
 for(int i = 0; i < tempArray.length;i++) {
 System.out.println("f1(" + String.valueOf(tempArray[i]) +
")=" + String.valueOf(f1.getY(tempArray[i])));
 System.out.println("f2(" + String.valueOf(tempArray[i]) +
")=" + String.valueOf(f2.getY(tempArray[i])));
 }
 // F(x)=0 Solution Test
 System.out.println("\nSolution Test");
 for(int i = 0; i < tempArray.length;i++){
 System.out.println("y = " + String.valueOf(tempArray[i]));
 boolean result1 = f1.hasSolution(tempArray[i]);
 boolean result2 = f2.hasSolution(tempArray[i]);
 System.out.print("f1:");
 System.out.println(result1);
 if(result1){
 f1.showSolution(tempArray[i]);
 }
 System.out.print("f2:");
 System.out.println(result2);
 if(result2){
 f2.showSolution(tempArray[i]);
 }
 System.out.println(""); 
 }
 }
} 