
// user defined data type
class Person{

    // data member
     private int age;
     private String name;
     private String dept;

     // parameterised constructor
    public Person(int age, String name, String dept){
         this.age = age;
         this.name = name;
         this.dept = dept;
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

        Person pramod = new Person(21, "Pramod", "CSE");
        pramod.showDetails();

        Person prachi = new Person(20, "Prachi", "Mech");
        prachi.showDetails();
    }
}