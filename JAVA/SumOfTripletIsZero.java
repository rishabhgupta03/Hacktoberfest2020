import java.util.*;

public class SumOfTripletIsZero {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);							//  Program using two pointer algorithm
		
			System.out.println("Enter the size of the array:");
			int n = sc.nextInt();
			int[] a = new int[n];
			System.out.println("Enter the elements in the array:");
			for(int i = 0; i < n; i++) {
				a[i] = sc.nextInt();
			}
			
			Triplet g = new Triplet();
			if(g.findTriplets(a, n)) {
				System.out.println("1");
			}
			else {
				System.out.println("0");
			}
			
			sc.close();

	}

}

class Triplet {
	
	//Function to check if triplet is present
	//arr[]: input array
	//n: size of the array
	
	public boolean findTriplets(int arr[], int n) {
		Arrays.sort(arr);
		
		for(int i = 0; i < n-2; i++) {
			if(twoSum(arr, -arr[i], i+1)) return true;
		}
		
		
		return false;
	}
	
	public boolean twoSum(int a[], int x, int i) {
		
		int j = a.length-1;
		
		while (i < j) {
			if(a[i] + a[j] > x) {
				j--;
			} else {
				if(a[i] + a[j] < x) {
					i++;
				} else {
					return true;
				}
			}
		}
		return false;
	}
}
