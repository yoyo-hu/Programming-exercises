//package test;
import java.util.*;
import java.text.DecimalFormat;
public class RockPaperScissors {
	static class Player{
		String name;
		int victoryTimes;
		int gameTimes;
		Player(String name){
			this.name=name;
			gameTimes=0;
			victoryTimes=0;
			}
		String getName(){
			return name;
		}
		int getVictoryTimes(){
			return victoryTimes;
		}
		int getGameTimes(){
			return gameTimes;
		}
		void reset() {
			victoryTimes=0;
			gameTimes=0;
		}
		void recordGame(boolean isVictory) {
			if(isVictory) {
				++victoryTimes;
				++gameTimes;
			}
		}
		int chooseShape() {
			Random rand = new Random();
			int result= rand.nextInt(2);
			if(result==0)
				System.out.print(name+':'+ "rock ");
			else if(result==1)
				System.out.print(name+':'+ "scissors ");
			else if(result==2)
				System.out.print(name+':'+ "paper ");
			return result;
		}
		void showMetrics() {
			System.out.println(name+':'+new DecimalFormat("0.000000").format(victoryTimes*1.0/gameTimes));
		}
	}
	static class Game{
		Player firstPlayer;
		Player secondPlayer;
		void setFirstPlayer(Player f){
			firstPlayer=f;
		}
		void setSecondPlayer(Player s){
			secondPlayer=s;
		}
		Player getFirstPlayer() {
			return firstPlayer;
		}
		Player getSecondPlayer() {
			return secondPlayer;
		}
		void run(int n){
			for(int i=0;i<n;i++){
				firstPlayer.gameTimes++;
				secondPlayer.gameTimes++;
				int status1=firstPlayer.chooseShape();
				int status2=secondPlayer.chooseShape();
				if(status1==status2) {
					System.out.println("result:Draw");
				}
				else if((status1+1)%3==status2) {
					firstPlayer.victoryTimes++;
					System.out.println("result:"+firstPlayer.name);
				}
				else if((status2+1)%3==status1) {
					secondPlayer.victoryTimes++;
					System.out.println("result:"+secondPlayer.name);
				}
			}
			firstPlayer.showMetrics();
			secondPlayer.showMetrics();
		}
	}
	public static void main(String[] args) {
		 Player zhangSan = new Player("ZhangSan");
		 Player liSi = new Player("LiSi");
		 Player wangWu = new Player("WangWu");
		 Game game = new Game();
		 System.out.println("Game.run Test");
		 game.setFirstPlayer(zhangSan);
		 game.setSecondPlayer(liSi);
		 game.run(5);
		 System.out.println("\nPlayer.reset test");
		 System.out.println("before reset:");
		 System.out.printf("victoryTimes : %d\n",
		liSi.getVictoryTimes());
		 System.out.printf("gameTimes : %d\n", liSi.getGameTimes());
		 liSi.reset();
		 System.out.println("after reset:");
		 System.out.printf("victoryTimes : %d\n",
		liSi.getVictoryTimes());
		 System.out.printf("gameTimes : %d\n", liSi.getGameTimes());
		 System.out.println("\nGame.setFirstPlayer test");
		 game.setFirstPlayer(wangWu); 
		 game.run(5);
	 }
	}

