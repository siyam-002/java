import java.util.Scanner;
public class array{
    public static void main(String[] args){
        System.out.println("Enter data: ");
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[5];
        for(int i=0; i<5; i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0; i<5; i++){
            System.out.println(arr[i]);
        }
        sc.close();
}
    }
    
