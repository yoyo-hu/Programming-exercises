package test;

public class AnimalDecoratorTest {
	public interface Animal{
		public String getType();// public, return the type of the animal
		public void setType(String type);//public, set the type of the animal
		public String getName();// public, return the name of the animal
		public void eat();//public, formulate the eating behavior, and print it to the console.  
		void bark(); //public, formulate the barking behavior, and print it to the console. 
		void showSkills();//public, formulate the barking behavior, and print it to the console.  void showSkills();// public, show the special skills it has, and 
	}
	static public class Dog implements Animal{
		private String type;// the type of the animal
		private String name;// the name of the animal
		public Dog(String name){
			this.name=name;
			this.type="Dog";
		}//public, the constructor of Dog
		public String getType(){
			return type;
		}//public, method that inherited from the Interface and shall be
		public String getName() {
			return name;
		}//public, method that inherited from the Interface and shall be
		public void setType(String type){
			this.type=type;
		}// public, method that inherited from the Interface and shall be
		public void eat() {
			System.out.println("The "+type+" \""+name+"\" is eating the food");
		}// public, method that inherited from the Interface and shall be implemented
		public void bark(){
			System.out.println("Woof Woof Woof");
		} //public, method that inherited from the Interface and shall be implemented
		public void showSkills(){
			if(type=="Dog"){
				System.out.println("The "+type+" \""+name+"\" don't have any skill.");
			}
			else if(type=="trained Dog"){
				System.out.println("The "+type+" \""+name+"\" is showing its skills:");
				TrainedAnimalDecorator temp=new TrainedAnimalDecorator(this);
				temp.showSkills();
			}
			else if(type=="scientific Dog"){
				System.out.println("The "+type+" \""+name+"\" is showing its skills:");
				ScientificAnimalDecorator temp=new ScientificAnimalDecorator(this);
				temp.showSkills();
			}
		}// public, method that inherited from the Interface and shall be
	}
	static public class Cat implements Animal{
		private String type;// the type of the animal
		private String name;// the name of the animal
		public Cat(String name){
			this.name=name;
			this.type="Cat";
		}//public, the constructor of Dog
		public String getType(){
			return type;
		}//public, method that inherited from the Interface and shall be
		public String getName() {
			return name;
		}//public, method that inherited from the Interface and shall be
		public void setType(String type){
			this.type=type;
		}// public, method that inherited from the Interface and shall be
		public void eat() {
			System.out.println("The "+type+" \""+name+"\" is eating the food");
		}// public, method that inherited from the Interface and shall be implemented
		public void bark(){
			System.out.println("Meow Meow Meow");
		} //public, method that inherited from the Interface and shall be implemented
		public void showSkills(){
			if(type=="Cat"){
				System.out.println("The "+type+" \""+name+"\" don't have any skill.");
			}
			else if(type=="trained Cat"){
				TrainedAnimalDecorator temp=new TrainedAnimalDecorator(this);
				temp.showSkills();
			}
			else if(type=="scientific Cat"){
				ScientificAnimalDecorator temp=new ScientificAnimalDecorator(this);
				temp.showSkills();
			}
		}// public, method that inherited from the Interface and shall be
	}
	static class AnimalDecorator implements Animal{
		public Animal animal;
		public AnimalDecorator(Animal animal){
			this.animal=animal;
		}//public, the constructor of Dog
		public String getType(){
			return animal.getType();
		}//public, method that inherited from the Interface and shall be
		public String getName() {
			return animal.getName();
		}//public, method that inherited from the Interface and shall be
		public void setType(String type){
			animal.setType(type);
		}// public, method that inherited from the Interface and shall be
		public void eat() {
			animal.eat();
		}// public, method that inherited from the Interface and shall be implemented
		public void bark(){
			animal.bark();
		} //public, method that inherited from the Interface and shall be implemented
		public void showSkills(){}// public, method that inherited from the Interface and shall be
	}
	static public class TrainedAnimalDecorator extends AnimalDecorator{
		public TrainedAnimalDecorator(Animal animal) {
			super(animal);
			animal.setType("trained "+animal.getType());
		}// public, the constructor of TrainedAnimalDecorator
		private void shakeHands(){
			System.out.println("\tThe "+animal.getType()+" \""+animal.getName()+"\" is shaking hands with you.");
		}//private, formulate the behavior of shaking hands, and print it to the console
		private void sitDown(){
			System.out.println("\tThe "+animal.getType()+" \""+animal.getName()+"\" sit down on the floor.");
		}// private, formulate the behavior of sitting down, and print it to the console
		public void showSkills(){
			System.out.println("The "+animal.getType()+" \""+animal.getName()+"\" is showing its skills:");
			shakeHands();
			sitDown();
		}//public, method that inherited from the Base Class and shall be overridden
	}
	static public class ScientificAnimalDecorator extends AnimalDecorator{
		public ScientificAnimalDecorator(Animal animal){
			super(animal);
			animal.setType("scientific "+animal.getType());
		}//public, the constructor of ScientificAnimalDecorator
		private void doExperiment(){
			System.out.println("\tThe "+animal.getType()+" \""+animal.getName()+"\" is doing experiment.");
		}///private, formulate the behavior of doing experiments, and print it to the console.  
		private void writePaper(){
			System.out.println("\tThe "+animal.getType()+" \""+animal.getName()+"\" \" is writing the paper.");
		} // private, formulate the behavior of writing paper, and print it to the console.  void showSkills(){}// public, method that inherited from the Base Class and shall b overridden
		public void showSkills(){
			System.out.println("The "+animal.getType()+" \""+animal.getName()+"\" is showing its skills:");
			doExperiment();
			writePaper();
		}
	}
	public static void main(String args[]){
	Cat cat = new Cat("Tom");
	Dog dog = new Dog("Herry");
	TrainedAnimalDecorator trainedCat = new TrainedAnimalDecorator(new Cat("Tom"));
	TrainedAnimalDecorator trainedDog = new TrainedAnimalDecorator(new Dog("Herry"));
	ScientificAnimalDecorator scientificCat = new ScientificAnimalDecorator(new Cat("Tom"));
	ScientificAnimalDecorator scientificDog = new ScientificAnimalDecorator(new Dog("Herry"));
	cat.eat();
	cat.bark();
	cat.showSkills();
	System.out.println("");
	dog.eat();
	dog.bark();
	dog.showSkills();
	System.out.println("");
	trainedCat.eat();
	trainedCat.bark();
	trainedCat.showSkills();
	System.out.println("");
	trainedDog.eat();
	trainedDog.bark();
	trainedDog.showSkills();
	System.out.println(""); 
	scientificCat.eat();
	scientificCat.bark();
	scientificCat.showSkills();
	System.out.println(""); 
	scientificDog.eat();
	scientificDog.bark();
	scientificDog.showSkills();
	System.out.println("");
	}
}
