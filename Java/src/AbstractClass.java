 abstract class Shape {
// If you dont want to use abstract we can use this also to overide functions in child class .

//    public double getArea(){
//    return 0.9;
//    };

//     Abstract method for calculating area (In abstract method nothing is written inside it)

    public abstract double getArea();

    // Method to get dimensions as a string
    public String getDimensions() {
        // Implemented in subclasses
        return "Dimensions not available for this shape.";
    }
}

// Concrete subclass for circles
class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double getArea() {
        return Math.PI * radius * radius;
    }

    @Override
    public String getDimensions() {
        return "Radius = " + radius;
    }
}

// Concrete subclass for rectangles
class Rectangle extends Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public double getArea() {
        return length * width;
    }

    @Override
    public String getDimensions() {
        return "Length = " + length + ", Width = " + width;
    }
}

// Concrete subclass for squares
class Square extends Shape {
    private double side;

    public Square(double side) {
        this.side = side;
    }

    @Override
    public double getArea() {
        return side * side;
    }

    @Override
    public String getDimensions() {
        return "Side = " + side;
    }
}

// Demonstration of usage
public class AbstractClass {
    public static void main(String[] args) {
        Shape circle = new Circle(5);
        Shape rectangle = new Rectangle(4, 6);
        Shape square = new Square(3);

        System.out.println("Circle area: " + circle.getArea());
        System.out.println("Rectangle area: " + rectangle.getArea());
        System.out.println("Square area: " + square.getArea());

        System.out.println("Circle dimensions: " + circle.getDimensions());
        System.out.println("Rectangle dimensions: " + rectangle.getDimensions());
        System.out.println("Square dimensions: " + square.getDimensions());
    }
}
