//package code;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

 
public class Client {
private static Socket s ;

public static void main(String[] args) throws UnknownHostException, IOException  {
       s = new Socket("localhost",8080);

       System.out.println("Client->"+s.getInetAddress().getHostAddress() + ":"+s.getLocalPort());

       Scanner input = new Scanner(System.in);

       PrintStream ps = new PrintStream(new BufferedOutputStream(s.getOutputStream()));

       BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));

       boolean flag = true;

       while (flag) {
        System.out.println("->");

        String info = input.next();

        if ("bye".equals(info)) {
        flag= false;

        }else {
        ps.println (info);

        ps.flush();

        System.out.println(br.readLine());

        }

       }

       br.close();

       ps.close();

}

}
