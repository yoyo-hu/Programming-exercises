//package text;
import java.util.Scanner;
public class EasyString {
	@SuppressWarnings({ "resource", "unused" })
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in); 
		 System.out.println(" Please enter an array of characters:"); 
		 String s = sc.nextLine();  //¶ÁÈ¡×Ö·û´®ĞÍÊäÈë
		 int len=s.length();
		 char[] ss=s.toCharArray();
		 
		char[] result=new char[1000];
		int num=0;
		int m=0;
		for(int i=0;i<len;i++){
			result[num++]=ss[i];	
			m=1;
			while(i<len-1&&ss[i+1]==ss[i]){
				m++;
				i++;
			}
			result[num++]=(char)('0'+m);
		}
		System.out.println(num);
		result[num]='\0';
		System.out.println(result);

	}
}
