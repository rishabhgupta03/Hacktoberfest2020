import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.print("Enter " + n + " element of the array: ");
        for(int i = 0; i < n; ++i) {
            arr[i] = sc.nextInt();
        }
        
        mergeSort(arr, 0, arr.length - 1);
  
        System.out.print("\nSorted array is: ");
        for(int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
    
    public static void mergeSort(int arr[], int l, int r)  { 
        if (l < r) {
            int m = (l+r)/2;
  
            mergeSort(arr, l, m);
            mergeSort(arr , m+1, r);
  
            merge(arr, l, m, r);
        }
    }
    
    public static void merge(int arr[], int l, int m, int r) {
        int fir = m - l + 1;
        int sec = r - m;

        int left[] = new int [fir];
        int right[] = new int [sec];
        for (int i=0; i<fir; ++i) 
            left[i] = arr[l + i]; 
        for (int j=0; j<sec; ++j) 
            right[j] = arr[m + 1+ j]; 

        int i = 0, j = 0;

        int k = l;
        while (i < fir && j < sec) { 
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            } else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }
  
        while (i < fir)  { 
            arr[k] = left[i];
            i++;
            k++; 
        }
  
        while (j < sec)  { 
            arr[k] = right[j];
            j++;
            k++;
        }
    }
}
