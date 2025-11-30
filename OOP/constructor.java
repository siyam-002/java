
    class Student{
        String name;
        int roll;

          Student(String x, int r){
            name = x;
            roll = r;
        }
    }


public class constructor {
    public static void main(String[] args) {
        Student a1 = new Student("seyam",32);
        System.out.println(a1.name+" "+a1.roll);

    }
    
}
