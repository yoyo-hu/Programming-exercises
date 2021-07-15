package test;

import java.util.ArrayList;
import java.util.List;

public class OrderFoodTest {
	static public abstract class Food{
		protected String name;
		protected int price;
		public Food(String name, int price){
			this.name=name;
			this.price=price;
		}//the constructor of Food
		public String getName(){
			return name;
			
		}// public, return the name of the food
		public int getPrice(){
			return price;
			
		}// public, return the price of the food
		public void setPrice(int price) {
			this.price=price;
		}// public, set the price of the food
		abstract public void take();
		//public, an abstract method should be implemented by the subclasses. People use this method to take the food.
	}
	static public class Drink extends Food{
		public Drink(String name, int price){
			super(name,price);
		}
		public void take() {
			System.out.print("The "+this.getClass().getSimpleName()+" "+name+" is taken\n");
		}
		
	}
	static public class Dishes extends Food{
		public Dishes(String name, int price){
			super(name,price);
		}
		public void take() {
			System.out.print("The "+this.getClass().getSimpleName()+" "+name+" is taken\n");
		}
		
	}
	static public class Order{
		protected List<Food> foodList=new ArrayList<Food>();
		//List<Food>, the List of the food we ordered
		protected int peopleAmount;
		//the amount of people who take the meal
		public Order(int peopleAmount){
			this.peopleAmount=peopleAmount;
		}
		// public, the constructor of Order
		public void addFood(Food newFood){
			System.out.print("The food"+'"'+newFood.getName()+'"'+" is added to the order\n");
			foodList.add(newFood);
		}
		//public, add the food into the foodList, and print the name of the food to console
		public void setPeopleAmount(int peopleAmount){
			this.peopleAmount=peopleAmount;
			
		}// public, set the amount of people
		public void showBill(){
			int sum=0;
			System.out.print("\nBill of the Order:\n");
			for(int i=0;i<foodList.size();i++) {
				System.out.print("name: "+foodList.get(i).getName()+','+"price: "+foodList.get(i).getPrice()+" yuan\n");
				sum+=foodList.get(i).getPrice();
			}
			try {
				if(peopleAmount<1)
					throw new Exception();
				System.out.print("Each Person should pay: "+sum/peopleAmount+" yuan\n\n");
			}
			catch(Exception e) {
				System.out.print("Error : Should be more than one person pay for the bill\n\n");
			}
			} // public, print the details of the food to console, and the splitted bill that each person should pay
			public void takeFood(){
				try {
					if(foodList.size()==0)
						throw new Exception();
					foodList.get(0).take();
					foodList.remove(0);
				}
				catch(Exception e) {
					System.out.print("Error : All the food have already taken\n");
				}
			}//public, enjoy the food with the sequence of adding to the foodList
	}
	public static void main(String args[]){
		Order order = new Order(0);
		order.addFood(new Drink("Coke",4));
		order.addFood(new Drink("Coffee",10));
		order.addFood(new Drink("Juice",6));
		order.addFood(new Drink("Tea",5));
		order.addFood(new Dishes("tofu",15));
		order.addFood(new Dishes("stir-fried vegetable",20));
		order.addFood(new Dishes("fried chicken",30));
		order.addFood(new Dishes("streamed fished",35));
		order.showBill();
		order.setPeopleAmount(4);
		order.addFood(new Dishes("Chow mein",35));
		order.showBill();
		for(int i = 0;i < 10;i++){
		order.takeFood();
		}
	}
}
