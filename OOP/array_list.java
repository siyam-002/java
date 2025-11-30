import java.util.*;

class Arraylist{
    int arr[] = new int[5];
    int idx = 0;
    int size = 0;
   public void add( int ele){{
    int [] brr = Arrays.copyOf(arr, arr.length*2);
    arr = new int[brr.length];
    arr = Arrays.copyOf(brr, brr.length);
   }
        arr[idx] = ele;
        idx++;
        size++;
    }
    public void set(int idx, int val){
        arr[idx] = val;
    }
}
public class array_list {
    public static void main(String[] args) {

        Arraylist arr = new Arraylist();
        arr.add(2);
        arr.add(1);

        arr.set(2,1);
        System.out.println(arr.size);

        
    }
    
}
