package arrays;

import java.util.Scanner;

public class AverageMarks {

	public static void main(String[] args) {
	 Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of subjects : ");
        int n = sc.nextInt();
        int marks[] = new int[n];
        System.out.println("Enter the marks now");
        IntStream.range(0,n).forEach(mark->{ marks[mark] = sc.nextInt();});
        System.out.println("The average marks are  " + Arrays.stream(marks).average().getAsDouble());

}
