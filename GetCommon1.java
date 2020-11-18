package HashMap;

import java.util.HashMap;
import java.util.Scanner;

public class GetCommon1 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int [] arr = new int[a];
        for (int i = 0; i < arr.length ; i++) {
            arr[i] = s.nextInt();
        }
        int b = s.nextInt();
        int [] arr2 = new int[b];
        for (int i = 0; i < arr.length ; i++) {
            arr2[i] = s.nextInt();
        }
        HashMap<Integer,Integer> hm = new HashMap<>();
        for(int val : arr){
            if(hm.containsKey(val)){
                int of = hm.get(val);
                int nf = of + 1 ;
                hm.put(val , nf);

            }else{
                hm.put(val, 1);
            }
        }
        for(int val : arr2){
            if(hm.containsKey(val)){
                System.out.println(val);
                hm.remove(val);
            }
        }

    }
}
