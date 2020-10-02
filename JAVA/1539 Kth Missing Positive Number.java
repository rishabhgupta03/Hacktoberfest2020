// https://leetcode.com/problems/kth-missing-positive-number/submissions/

class Solution {
    public int findKthPositive(int[] arr, int k) {
        if(k > arr[arr.length - 1] - arr.length) return k + arr.length;
        int x = 1;
        int i = 0;
        while(i < arr.length) {
            if(arr[i] != x) {
                k--;
                if(k == 0) return x;
            }
            else i++;
            x++;
        }
        return k + x - 1;
    }
}