import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter size of an array");
        int n = scan.nextInt();
        int[] a = new int[n];
        System.out.println("Enter array elements");
        for(int i=0;i<n;i++)
            a[i] = scan.nextInt();
        System.out.println("Enter Element to be Searched");
        int k = scan.nextInt();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid]==k){
                System.out.println(k + " found at index " + mid);
                return;
            }
            if(k>a[mid])
                low=mid+1;
            else
                high=mid-1;
        }
        System.out.println("Element not found");
    }
}