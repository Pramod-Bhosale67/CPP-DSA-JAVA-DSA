
// user defined data type
class Math{

    void add(int a, int b){
        int ans = a + b;
        System.out.println(ans);
    }

    int add(int b, double d){
        return (int)(b + d);
    }

    void add(double a, int b){
        System.out.println(a + b);
    }

    void add(double a, double b){
        double ans = a + b;
        System.out.println(ans);
    }
}



public class Main {

    public static void main(String[] args) {

        Math obj = new Math();

        obj.add(10, 20);
        obj.add(20.5, 15.5);

    }
}