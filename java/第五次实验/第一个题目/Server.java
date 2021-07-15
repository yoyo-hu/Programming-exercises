//package code;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;
 
public class Server {
	public static List<Socket> clients = new ArrayList<Socket>();
	public static class UserThread implements Runnable {
        private Socket s;

        public UserThread(Socket s) {
            this.s = s;
        }

        public void run() {

            System.out.println("Connect to client: "+s.getInetAddress().getHostAddress() + ":"+s.getLocalPort());

            // 获取输入输出流

            try {
                BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));

                boolean bool = true;

                while (bool) {
                    String info = br.readLine();

                    if ("".equals(info) || "bye".equals(info)) {
                        bool = false;

                    } else {
                        //System.out.println(info);
                    	//服务端给给除了发送该条信息以外的用户以外的其他用户转发消息
                    	for(int i=0;i<clients.size();i++) {
                    	Socket stemp=clients.get(i);
                    	if(stemp!=s) {
	                    	PrintStream ps = new PrintStream(new BufferedOutputStream(stemp.getOutputStream()));
	                        ps.println(s.getInetAddress().getHostAddress() + ":"+s.getLocalPort()+" : "+ info);
	                        ps.flush();
	                        ps.close();
                        	}
                        }

                    }

                }

                br.close();

            } catch (IOException e) {
                e.printStackTrace();

            }

        }

    }
    public static void main(String[] args) throws Exception {

        ServerSocket serverSocket = new ServerSocket(8080);

        System.out.println("Server->java Server\nInitializing Port...\nListening...");

        boolean flag = true;

        while (flag) { // 主线程用来连接客户端，每次连接一个则开启一个新线程

            Socket s = serverSocket.accept();
            clients.add(s);
            new Thread(new UserThread(s)).start();

        }

    }
}

// 处理用户的连接
