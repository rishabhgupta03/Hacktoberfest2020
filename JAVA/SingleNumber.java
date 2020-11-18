package HashMap;

import java.util.HashSet;
import java.util.Scanner;

public class SingleNumber {

    public static int singleNumber(int[] nums) {

        HashSet<Integer> set = new HashSet<>();
        for (int i : nums){
            if(set.contains(i)){
                set.remove(i);
            }else{
                set.add(i);
            }
        }
        for (int i : set){
            return i;
        }

        return -1;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
       int n = s.nextInt();
        int nums[] = new int[n];
        for (int i = 0; i <nums.length ; i++)
        {
            nums[i] = s.nextInt();

        }
        System.out.println(singleNumber(nums));
    }

}
