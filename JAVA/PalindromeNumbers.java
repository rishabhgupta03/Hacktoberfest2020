import java.util.Scanner;

public class PalindromeNumbers {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number:");
		int n = sc.nextInt();
		
		int temp = n;
		int reversedNumber = 0;
		
		while(temp > 0) {
			int lastDigit = temp % 10;
			reversedNumber = (reversedNumber * 10) + lastDigit;
			temp /= 10;
		}
		
		if(reversedNumber == n) {
			System.out.println(n + " is a palindrome number.");
		}
			else {
				System.out.println(n + " is not a palindrome number.");
			}
            
		sc.close();
	}

}
