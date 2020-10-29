import java.util.Scanner;

public class WaveTraversal2D {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		int m = scn.nextInt();
		
		int [][] arr = new int[n][m];
		
		for(int i=0;i<arr.length;i++)
		{
		 for(int j=0;j<arr[0].length;j++)
		 {
			 arr[i][j] = scn.nextInt();
		 }
		}
		
		for(int j=0;j<arr[0].length;j++)
		{
			if(j%2 == 0)
			{
				for(int i =0;i<arr.length;i++)
				{
					System.out.println(arr[i][j]);
				}
			}
			else
			{
				for(int i=arr.length -1; i>=0 ;i--)
				{
					System.out.println(arr[i][j]);
				}
			}
		}

	}

}
