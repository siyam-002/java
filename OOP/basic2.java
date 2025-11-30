public class basic2 {

    
public static class Car{
        String name;
        String model;
        int wheel;
    }
    public static void fun(Car x){
        System.out.println(x.name+" "+x.model+" "+x.wheel);
    }

    public static void main(String [] args){
        Car c = new Car();
        c.name = "Audi";
        c.model = "BMW";
        c.wheel = 4;
        fun(c);
    }
    
} 
