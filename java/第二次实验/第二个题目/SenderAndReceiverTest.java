package test;

import java.util.List;
import java.util.ArrayList;

public class SenderAndReceiverTest {
	interface Sender{
		void send(Receiver receiver, String message);
	}
	interface Receiver{
		void receive(Sender sender, String message);

	}
	static public class User implements Sender, Receiver{
		private String name;
		private  List<String> messageList=new ArrayList<String>();
		User(){}
		User(String name){
			this.name=name;
		}
		public void send(Receiver receiver, String message) {
			receiver.receive(this, "[From "+name+"]"+message);
		}
		public void receive(Sender sender, String message) {
			messageList.add(message);
		}
		public void showMessages() {
			for(int i=0;i<messageList.size();i++) {
				System.out.println(messageList.get(i));
			}
		}
	}
	static public class Channel implements Receiver{
		private String name;
		private  List<User> userList=new ArrayList<User>();
		public Channel() {
		}
		public Channel(String name) {
			this.name=name;
		}
		public void receive(Sender sender, String message) {
			for(int i=0;i<userList.size();i++) {
				if(userList.get(i)!=sender) {
					userList.get(i).receive(userList.get(i), "[From "+name+"]"+message);
				}
			}
		}
		public void add(User user){
			
			userList.add(user);
		}
		public void remove(User user){
			userList.remove(user);
		}
	}
	 public static void main(String[] args) {
	 User zhangSan = new User("ZhangSan");
	 User liSi = new User("LiSi");
	 User wangWu = new User("WangWu");
	 User zhaoLiu = new User("zhaoLiu");
	 Channel douBiFanZhiJiDi = new Channel("douBiFanZhiJiDi");
	 douBiFanZhiJiDi.add(zhangSan);
	 douBiFanZhiJiDi.add(liSi);
	 douBiFanZhiJiDi.add(wangWu);
	 Channel yongYuanDe308 = new Channel("yongYuanDe308");
	 yongYuanDe308.add(liSi);
	 yongYuanDe308.add(wangWu);
	 yongYuanDe308.add(zhaoLiu);
	 zhaoLiu.send(yongYuanDe308, "What did you guys do during the holidays");
	 wangWu.send(yongYuanDe308, "I went to eat barbecue, haha");
	zhaoLiu.send(yongYuanDe308, "It sounds interesting, we can barbecue together next time!");
	douBiFanZhiJiDi.remove(zhaoLiu);
	 zhangSan.send(douBiFanZhiJiDi, "Please help me ask what Zhao Liu likes");
	 wangWu.send(douBiFanZhiJiDi, "Zhang, I was Wang. Can't help you, bro. sorry");
	 zhangSan.send(douBiFanZhiJiDi, "Lisi, would you mind...");
	 liSi.send(douBiFanZhiJiDi, "You know I don’t like to be a matchmaker.");
	 System.out.println("ZhangSan's messages list:");
	 zhangSan.showMessages();
	 System.out.println("\nLiSi's messages list:");
	 liSi.showMessages();
	 System.out.println("\nWangWu's messages list:");
	 wangWu.showMessages();
	 System.out.println("\nZhaoLiu's messages list:");
	 zhaoLiu.showMessages();
	 }
	}

