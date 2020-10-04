package arrays;

public class SelectionSortPractice {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int a[] = {9, 6, 7, 3, 5,-15, 18};
		
		int n = a.length;
		
		for(int i = 0 ; i<n; i++) {
			
			int minInd = i;
			for(int j = i; j<n; j++) {
				if(a[minInd] > a[j]) {
					minInd = j;
				}
			}
			
			
		
		
		int temp = a[i];
		a[i] = a[minInd];
		a[minInd] = temp;
		}
		
		for(int e : a) {
			System.out.print(e + " ");
		}
	}

}
