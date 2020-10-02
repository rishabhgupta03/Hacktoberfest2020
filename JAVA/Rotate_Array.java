//https://leetcode.com/problems/rotate-array/
class Solution {
    public void rotate(int[] nums, int k) {
        for(int i=0;i<k;i++){
            int temp = nums[nums.length-1];
            int j = nums.length-2;
            while(j>=0){
                nums[j+1] = nums[j];
                j--;
            }
            nums[0] = temp;
        }
    }
}