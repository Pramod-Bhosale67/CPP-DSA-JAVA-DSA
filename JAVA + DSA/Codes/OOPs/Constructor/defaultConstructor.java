
// user defined data type
class Person{

    // data member
     int age;
     String name;
     String dept;

     // default constructor
     public Person(){
         age = 21;
         name = "Pranali";
         dept = "CSE";

         System.out.println("Im in the constructor");
     }


    // methods
   public void showDetails(){
        System.out.println("Name of the person : " + name);
        System.out.println("Age of the person : " + age);
       System.out.println("Dept is: " + dept);
    }
}



public class Main {

    public static void main(String[] args) {

        Person pranali = new Person();
        pranali.showDetails();


    }
}