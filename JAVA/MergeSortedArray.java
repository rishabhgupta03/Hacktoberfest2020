public class MergeSortedArray {
    public static void main(String[] args) {
        int[] nums1 = {1,2,3,0,0,0};
        int[] nums2 = {1,2,3};
        int m = 3;
        int n = 3;
        merge(nums1, m, nums2, n);
    }

    public static void merge(int[] nums1, int m, int[] nums2, int n) {
        int num2Index = 0;
        for(int i = 0; i < nums1.length; i++) {
            if(num2Index < n) {
                if(nums1[i] > nums2[num2Index]) {
                    insertAtPosition(nums1, i, nums2[num2Index]);
                    m++;
                    num2Index++;
                }
                if(i >= m) {
                    insertAtPosition(nums1, i, nums2[num2Index]);
                    m++;
                    num2Index++;
                }
            } else {
                // nums1[i] = 0;
            }
        }

        System.out.print("[");
        for(int i = 0; i < nums1.length; i++) {
            if(i == nums1.length - 1) System.out.print(nums1[i]);
            else System.out.print(nums1[i] + ",");
        }
        System.out.print("]");
    }

    public static void insertAtPosition(int[] nums1, int position, int numToAdd) {
        for(int i = nums1.length - 2; i >= 0; i--) {
            if(i >= position) {
                nums1[i + 1] = nums1[i];
            }
        }
        nums1[position] = numToAdd;
    }
}
