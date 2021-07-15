package test;

import java.util.ArrayList;

import java.util.List;


public class ObserverPatternTest {
static public class User{
	private String name;//the name of user
	private List<User> followList=new ArrayList<User>(); // the follow list of user
	private List<User> fansList=new ArrayList<User>();//the fans list of user
	private List<String> messageList=new ArrayList<String>();// the messages list of user
	public User(String name){
		this.name=name;
	}// the constructor
	public String getName(){
		return name;
	} 
	public List<User> getFollowList(){
		return followList;
	}
	public List<User> getFansList(){
		return fansList;
	}
	public void notify(String message){
		messageList.add(message);
	}//append message to messages list
	public void showFollowList(){
		System.out.print(name+"'s follow list:\n");
		for(int i=0;i<followList.size();i++) {
			System.out.print(followList.get(i).getName()+'\n');
		}
	} // output each user’s name in follow list line by line to console
	public void showFansList(){
		System.out.print(name+"'s fans list:\n");
		for(int i=0;i<fansList.size();i++) {
			System.out.print(fansList.get(i).getName()+'\n');
		}
	}// output each user’s name in fans list line by line to console
	public void ShowMessageList(){
		System.out.print(name+"'s message list:\n");
		for(int i=0;i<messageList.size();i++) {
			System.out.print(messageList.get(i)+'\n');
		}
	}// output each message in messages list line by line to console
}
interface Observer{
   void notify(User pageUser, User follower);
}
static public class FollowButton{
	private User pageUser;//the follow button is at this user’s home page
	private List<Observer> observerList=new ArrayList<Observer>(); // the observer list
 	public FollowButton(User pageUser){
		this.pageUser=pageUser;
	} //the constructor
 	public void click(User clicker){
 		for(int i=0;i<observerList.size();i++) {
 			observerList.get(i).notify(pageUser,clicker);
 		}
	}// click this button by clicker
 	public void addObserver(Observer observer){
 		observerList.add(observer);
 	} // add observer to observerList
}
static public class FollowIncrease implements Observer{
	public void notify(User pageUser, User follower) {
		follower.followList.add(pageUser);
	} //method that inherited from the Interface and shall beimplemented, which will increase the follower’s follow list
}
static public class FansIncrease implements Observer{
	public void notify(User pageUser, User follower) {
		pageUser.fansList.add(follower);
	}//method that inherited from the Interface and shall beimplemented, which will increase the pageUser’s fans list
}
static public class BeFollowed implements Observer{
	public void notify(User pageUser, User follower) {
		pageUser.messageList.add("You are followed by "+follower.getName());
	}//method that inherited from the Interface and shall beimplemented, which will increase the pageUser’s fans list
}
public static void main(String[] args) {
User zhangSan = new User("ZhangSan");
User liSi = new User("LiSi");
User wangWu = new User("WangWu");
User zhaoLiu = new User("zhaoliu");
FollowButton[] followButtons = {new FollowButton(zhangSan),new FollowButton(liSi),new FollowButton(wangWu),new FollowButton(zhaoLiu)};
FollowIncrease followIncrease = new FollowIncrease();
FansIncrease fansIncrease = new FansIncrease();
BeFollowed beFollowed = new BeFollowed();
for (FollowButton followButton : followButtons) {
	followButton.addObserver(followIncrease);
	followButton.addObserver(fansIncrease);
	followButton.addObserver(beFollowed);
}
followButtons[0].click(liSi);
followButtons[0].click(wangWu);
followButtons[0].click(zhaoLiu);
followButtons[1].click(zhangSan);
followButtons[1].click(wangWu);
followButtons[2].click(zhangSan);
followButtons[2].click(liSi);
followButtons[2].click(zhaoLiu);
followButtons[3].click(liSi);
followButtons[3].click(wangWu);
zhangSan.showFansList ();
zhangSan.showFollowList ();
zhangSan.ShowMessageList ();
liSi.showFansList ();
liSi.showFollowList ();
liSi.ShowMessageList ();
wangWu.showFansList ();
wangWu.showFollowList ();
wangWu.ShowMessageList ();
zhaoLiu.showFansList ();
zhaoLiu.showFollowList ();
zhaoLiu.ShowMessageList ();
}
}
