
//package - folder

class Person{
    // data members
    private int age;
    private String name;

    public void setAge(int ageOfThePerson){
        age = ageOfThePerson;
    }

    public void setName(String nameOfPerson){
        name = nameOfPerson;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    // member function
    public void info(){
        System.out.println("Age of the person is: " + age);
        System.out.println("Name of the person is: " + name);
    }
}

public class Main {
    public static void main(String[] args) {

        Person yash = new Person(); // object declaration

        yash.setAge(20);
        yash.setName("Yash");

        int yashAge = yash.getAge();
        String yashName = yash.getName();

        System.out.println(yashAge + " " + yashName);

//        yash.info();

//        System.out.println(yash.age);
//        System.out.println(yash.name);

        // getters & setter


    }
}