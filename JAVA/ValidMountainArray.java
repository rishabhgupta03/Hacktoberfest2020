public class ValidMountainArray {
    public static void main(String[] args) {
        int[] arr = {3,2,1};
        boolean isValid = validMountainArray(arr);

        System.out.print("[");
        for(int i = 0; i < arr.length; i++) {
            if(i == arr.length - 1) System.out.print(arr[i]);
            else System.out.print(arr[i] + ",");
        }
        System.out.print("]");
        System.out.println("");
        System.out.println("Mountain: " + isValid);
    }

    public static boolean validMountainArray(int[] A) {
        if(A.length < 3) return false;
        int peakPos = 0;
        boolean isAscend = false;

        for(int i = 0; i < A.length - 1; i++) {
            if(A[i] == A[i + 1])
                return false;

            if(A[i] < A[i + 1]) {
                // Ascending
                if(i > peakPos && peakPos != 0) return false;
                isAscend = true;
            }

            if(A[i] > A[i + 1]) {
                // Descending
                if(!isAscend) return false;
                if(i < peakPos && peakPos != 0) return false;
                if(peakPos == 0) peakPos = i;
            }
        }

        if(peakPos == 0) return false;
        if(peakPos == A.length - 1) return false;
        return true;
    }
}
