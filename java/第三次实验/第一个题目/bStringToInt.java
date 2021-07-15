package test;
import java.util.*;


public class bStringToInt {
	public static int binaryStringToInt(String s, int start, int end) {
		int len=s.length();
		int result=0;
		if(start<0||end>len)
			throw new StringIndexOutOfBoundsException();
		if(end-start>32){
			throw new ArithmeticException();
		}
		for(int i=start;i<end;i++) {
			char x=s.charAt(i);
			if(x!='0'&&x!='1')
				throw new NumberFormatException();
			result=result*2+(x-'0');
		}
		return result;
	}
	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		System.out.print("s:");
		String s = in.nextLine();
		System.out.print("start:");
		int start=in.nextInt();
		System.out.print("end:");
		int end=in.nextInt();
		try {
			System.out.print("result:");
			int result=binaryStringToInt(s, start, end);
			System.out.print(result+"\n");
		}
		catch(StringIndexOutOfBoundsException e) {
			System.out.print("string index out of bounds.\n");
		}
		catch(NumberFormatException e) {
			System.out.print("incorrect binary number format.\n");
		}
		catch(ArithmeticException e) {
			System.out.print("out of bits size of int\n");
		}
	}
}
