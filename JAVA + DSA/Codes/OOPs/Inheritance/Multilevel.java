
// Multilevel Inheritance

// Parent Class
class Vehical{
    int wheels;
    boolean isPetrol; // true for petrol
}

// Child Class -> Parent Class
class FourWheeler extends Vehical{
    String brand;
}

// Child Class
class Car extends FourWheeler{
    String name;

    public Car(){
        wheels = 4;
        isPetrol = false;
        brand = "Kia";
        name = "Seltos";
    }

    public void showDetails(){
        System.out.println("Brand of the Car: " + brand);
        System.out.println("Name of the Car: " + name);
        System.out.println("Petrol or Diesel: " + (isPetrol ? "Petrol" : "Diesel"));
        System.out.println("Total Number of wheels: " + wheels);
    }
}

public class Main {

    public static void main(String[] args) {

        Car seltos = new Car();
        seltos.showDetails();
    }
}