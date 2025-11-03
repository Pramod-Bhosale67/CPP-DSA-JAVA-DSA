

// user defined data type
class Person{

    // data member
    private int age;
    private String name;

    // methods
   public void showDetails(){
        System.out.println("Name of the person : " + name);
        System.out.println("Age of the person : " + age);
    }
}

public class Main {
    public static void main(String[] args) {

        Person yash = new Person();

        // access members using dot(.) operator
        yash.age = 21;
        yash.name = "Yash";

        yash.showDetails();
        
    }
}