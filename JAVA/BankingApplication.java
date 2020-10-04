//This java code is a bank application which firstly, takes the user's ID and pswd by signing them up. then it asks them to log in.
//Then it asks the user to choose between different choices like withdrawal,deposit, printing previous transaction,checking balance and printing receipt.
//It does all the math on whatever your bank money is.


          //CODE

import java.util.Scanner;

public class BankingApplication {


	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
	
		System.out.println("=============================================================================================================");
		System.out.println("!!! WELCOME TO THE BANK THAT CARES FOR YOU !!!");
		System.out.println("=============================================================================================================");
		System.out.println("\n");
		
		System.out.println("=============================================================================================================");
		System.out.println("!!! SIGN UP FIRST FOR YOUR BANK ACCOUNT !!!");
		System.out.println("=============================================================================================================");
		System.out.print("\n\n");
		
		System.out.println("=============================================================================================================");
		System.out.print("Enter your name:");                  //taking the customer's name in 'cName'
		String cName = sc.nextLine();
		
		System.out.print("Enter your LogIn ID:");                //taking customer ID in 'ID'
		int ID = sc.nextInt();                     
		
		sc.nextLine();
		System.out.print("Create a password:");                 //taking customer's pswd in 'pass'
		String pass = sc.nextLine();
		System.out.println("=============================================================================================================");
		
		System.out.println("~~~~~~~~~~~~~~~~~~~~~~");
		System.out.println("Your LogIn credentials---------");                   //printing the user credentials.
		System.out.println("Name ---> " +cName);
		System.out.println("LogIn ID ---> " +ID);
		System.out.println("Password ---> " +pass);
		System.out.println("~~~~~~~~~~~~~~~~~~~~~~");
		

		
		System.out.print("\n\n");
		
		System.out.println("=============================================================================================================");
		System.out.println("!!! LOG IN INTO YOUR BANK ACCOUNT !!!");          //now the customer has to log in.
		System.out.println("=============================================================================================================");
		System.out.print("\n");
		System.out.println("=============================================================================================================");
		
		System.out.print("Enter your customer ID:");                     
		int cID = sc.nextInt();
		sc.nextLine();
		
		if(ID == cID) {                                    //if 'ID'(entered earlier while signing up) is equal to 'cID' (entered now while logging in), omly then asked for pswd
			System.out.print("Enter your password:");
			String cPswd = sc.nextLine();
			
			if(pass.equals(cPswd)) {               //if 'pass' and 'cPswd' (newly entered pswd) are equal, only then the code goes further
				BankAccount obj = new BankAccount(cName, cID);
				obj.showMenu();
			}
			
			else {
				System.out.println("WRONG PASSWORD!!!");
			}
			
		}
		
		else {
			System.out.println("INVALID ID!!!");
		}
		
		sc.close();

	}

}

class BankAccount {
	String custName;
	int custID;
	String custPswd;
	float balance;
	float prevTransaction;
	
	BankAccount(String cName, int cID) {
		custID = cID;
		custName = cName;
	}
	
	void deposit(float amount) {
		
		if(amount != 0) {
			balance += amount;
			prevTransaction = amount;
		}
	}
	
	void withdrawal(float amount) {
		
		if(amount != 0) {
			balance -= amount;
			prevTransaction = -amount;
		}
	}
	
	void getPreviousTransaction() {
		
		if(prevTransaction < 0) {
			System.out.println("Your previous transaction was a withdrawal of Rs." + Math.abs(prevTransaction));  //negative transaction means withdrawal, giving amount in positive using Math.abs
		}
		
		else if(prevTransaction > 0) {
			System.out.println("Your previous transaction was a deposit of Rs." + prevTransaction);          //positive transaction means deposition
		}
		
		else {
			System.out.println("No transaction occurred!!!");
		}
	}
	
	void receipt() {
		System.out.println("~~~~~~~~~~~~~~~~~~~~~~");
		System.out.println("                             RECEIPT                            ");
		System.out.println("\n");
		System.out.println("     THANK YOU FOR USING OUR SERVICES " + custName + " !!!");
		System.out.println("\n");
		getPreviousTransaction();
		System.out.println("\n");
		System.out.println("                Current Balance = " + balance);
		System.out.println("\n");
		System.out.println("                      !!! HAVE A GOOD DAY !!!                   ");
		System.out.println("~~~~~~~~~~~~~~~~~~~~~~");
	}
	
	void border() {
		System.out.println("=============================================================================================================");
	}
	
	void showMenu() {
		Scanner sc = new Scanner(System.in);
		char choice;
		border();
		System.out.println("WELCOME " + custName + " !!!");
		System.out.println("Customer ID: " + custID);
		System.out.println("Your current balance is " + balance);
		border();
		border();
		System.out.println("A. Deposit Money");
		System.out.println("B. Withdraw Money");
		System.out.println("C. Check Previous Transaction");
		System.out.println("D. Check Bank Balance");
		System.out.println("E. Receipt");
		System.out.println("F. Exit");
		
		do {
			System.out.print("\nEnter your choice:");
			choice = sc.next().toUpperCase().charAt(0);
			System.out.println("\n");
			float amount;
			
			switch(choice) {
			
			case 'A':
				border();
				System.out.print("Enter the amount to deposit:");
				amount = sc.nextFloat();
				deposit(amount);
				System.out.println("Balance = " + balance);
				border();
				break;
				
			case 'B':
				border();
				System.out.print("Enter the amount to withdraw:");
				amount = sc.nextFloat();
				withdrawal(amount);
				System.out.println("Balance = " + balance);
				border();
				break;
				
			case 'C':
				border();
				getPreviousTransaction();
				border();
				break;
				
			case 'D':
				border();
				System.out.println("Your bank balance is " + balance);
				border();
				break;
				
			case 'E':
				System.out.println("\n");
				receipt();
				break;
				
			case 'F':
				border();
				System.out.println("Thank you for using our services!!!");
				border();
				break;
				
			default:
				System.out.println("Invalid Choice, Try Again!!!");
			}
		}
		while(choice != 'F');          
		sc.close();
	}
}
