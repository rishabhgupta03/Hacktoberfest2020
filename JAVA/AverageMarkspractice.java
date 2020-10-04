package arrays;

import java.util.Scanner;

public class AverageMarkspractice {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		  	System.out.println("Enter the number of students : ");
		  	
		  	Scanner sc = new Scanner(System.in);
		  	
		  	
		  	int n = sc.nextInt();
		  	
		  	int[] marks = new int[n];
		  	
		  	System.out.println("Enter the marks now");
		  	
		  	for(int i = 0; i <n; i++) {
		  		marks[i] = sc.nextInt();
		  		
		  	}
		  	
		    int avg = 0;
		  	
		  	for(int i = 0; i<n; i++) {
		  		avg += marks[i];
		  	}
	     
		  	avg /= n;
		  	
		  	System.out.println("The average of your marks is "+avg);
	}

}
