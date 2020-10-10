public class RemoveDuplicatesFromSortedArray {
    public static void main(String[] args) {
        int[] nums = {1,1,2,3};
        removeDuplicates(nums);
    }

    public static int removeDuplicates(int[] nums) {
        int count = 0;
        for(int i = 0; i < nums.length - 1;) {
            if(nums[i] == nums[i + 1] && i < nums.length - count) {
                removeElementAt(nums, i);
                count++;
            }
            i = (nums[i] == nums[i + 1] && i < nums.length - count) ? i : (i + 1);
        }

        int newCount = nums.length - count;
        System.out.print("[");
        for(int i = 0; i < newCount; i++) {
            if(i == newCount - 1) System.out.print(nums[i]);
            else System.out.print(nums[i] + ",");
        }
        System.out.print("]");
        return newCount;
    }

    public static void removeElementAt(int[] nums, int position) {
        for(int i = position; i < nums.length - 1; i++) {
            nums[i] = nums[i + 1];
        }
        nums[nums.length - 1] = Integer.MIN_VALUE;
    }
}
