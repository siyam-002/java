import java.util.Scanner;

public class input{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("enter your name: ");
        String name=sc.nextLine();
        System.out.println("your name is "+name);
        System.out.print("enter your age: ");
        int n = sc.nextInt();
        System.out.println("your age is "+n);

        sc.close();
        
    }
}