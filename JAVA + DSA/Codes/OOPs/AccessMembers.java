
// user defined data type
class Person{

    // data member
     int age;
     String name;
     String dept;
     String clg;

    // methods
   public void showDetails(){
        System.out.println("Name of the person : " + name);
        System.out.println("Age of the person : " + age);
       System.out.println("Dept is: " + dept);
       System.out.println("College: " + clg );
    }
}

public class Main {
    public static void main(String[] args) {

        Person yash = new Person();
        yash.age = 21;
        yash.name = "Yash";
        yash.dept = "CSE";
        yash.clg = "TKIET";
        yash.showDetails();
    }
}