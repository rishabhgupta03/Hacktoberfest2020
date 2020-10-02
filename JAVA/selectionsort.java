import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

// Java program for implementation of Selection Sort
class SelectionSort
{
	void sorting(ArrayList<Integer> arr)
	{
		int n = arr.size();
		for (int i = 0; i < n-1; i++)
		{			
			int min_idx = i;
			for (int j = i+1; j < n; j++)
				if (arr.get(j) < arr.get(min_idx))
					min_idx = j;

			int temp = arr.get(min_idx);
			arr.set(min_idx, arr.get(i));
			arr.set(i,temp);
		}
	}

	public static void main(String args[]) throws IOException
	{
        SelectionSort obj = new SelectionSort();
        String pathToFile = "./Sorting/unsorted.txt";
        File unsorted = new File(pathToFile);
        Scanner sc = new Scanner(unsorted);
        sc.useDelimiter(",");
        ArrayList<Integer> arr = new ArrayList<Integer>();
        while(sc.hasNext()){
            arr.add(sc.nextInt());
        }
		obj.sorting(arr);
        System.out.println("Sorted array");
		
        System.out.println( arr);
        sc.close();
	}
}
