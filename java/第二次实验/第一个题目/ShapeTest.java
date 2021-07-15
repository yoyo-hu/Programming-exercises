package test;

 public class ShapeTest {
	 static public abstract class Shape {
		 // fields
		 protected String name;
		 // methods
		 public Shape(String name){
		 this.name = name;
		 }
		 public String getName() {
		 return name;
		 }
		 public void setName(String name) {
		 this.name = name;
		 }
		 // abstract method
		 public abstract double getArea();
		 public abstract void showDescription();
	};
	static public class Circle extends Shape{
		protected double radius;
		public Circle(double radius){
			super("Circle");
			this.radius=radius;
		}
		public double getRadius() {
			return radius;
		}
		public void setRadius(double radius) {
			this.radius=radius;
		}
		public  double getArea() {
			return Math.PI*radius*radius;
		}
		 public  void showDescription() {
			 System.out.println("Shape: "+name+"\n");
			 System.out.println("radius: "+String.format("%.4f", radius)+"\n");
			 System.out.println("Area: "+String.format("%.4f", getArea())+"\n");
			 System.out.println("Perimeter: "+String.format("%.4f", getPerimeter())+"\n\n");
		 }
		 public double getPerimeter() {
			 return Math.PI*radius*2;
		 }
		
	};
	static public class Cylinder extends Shape{
		protected double radius;
		protected double height;
		public Cylinder(double radius, double height) {
			super("Cylinder");
			this.height=height;
			this.radius=radius;
		}
		public double getHeight() {
			return height;
		}
		public void setHeight(double height) {
			this.height=height;
		}
		public double getRadius() {
			return radius;
		}
		public void setRadius(double radius) {
			this.radius=radius;
		}
		public double getArea() {
			return height*Math.PI*radius*2+2*Math.PI*radius*radius;
		}
		public double getVolume() {
			return Math.PI*radius*radius*height;
		}
		public  void showDescription() {
			 System.out.println("Shape: "+name+"\n");
			 System.out.println("radius: "+String.format("%.4f", radius)+"\n");
			 System.out.println("height: "+String.format("%.4f", height)+"\n");
			 System.out.println("Area: "+String.format("%.4f", getArea())+"\n");
			 System.out.println("Volume: "+String.format("%.4f", getVolume()));
		 }
	};
	 public static void main(String args[]){
	Shape shape1 = new Circle(3.0);
	Shape shape2 = new Cylinder(3.0, 4.0);
	double sumAreaOfShape =shape1.getArea()+shape2.getArea();
	System.out.println("Sum area of shape is: " +String.format("%.4f", sumAreaOfShape)+'\n');
	System.out.println("The name of shape1 is: " +shape1.getName()+'\n');
	System.out.println("The name of shape2 is: " +shape2.getName()+'\n');
	System.out.println("");
	shape1.showDescription();
	shape2.showDescription();
	 };
}