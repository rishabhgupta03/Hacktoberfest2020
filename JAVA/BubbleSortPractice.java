package arrays;

public class BubbleSortPractice {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int a [] = {1, 5, 4, -3, -6, 2 , 12, 16, -18};
		
		int n = a.length;
		
		for(int i = 0; i <n-1; i++) {
			for(int j = 0; j<n-1;  j++) {
				if(a[j+1] < a[j]) {
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
			
		}
       
		
		for(int e : a) {
			System.out.print(e + " ");
		}
	}

}
