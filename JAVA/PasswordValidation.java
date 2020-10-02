import java.util.*;
class MyException extends Exception{
	
	MyException(String msg){
		super(msg);
	}
}
class PasswordValidation{
public static void main(String [] args){
	Scanner sc=new Scanner(System.in);
	System.out.println("Password must contain one digit, one uppercase character, one lowercase character and length should be greater than equal to 8");
	System.out.println("Enter password : ");
	String y=sc.nextLine();
	int ctd=0,ctu=0,ctl=0;
	try{
		if(y.length()<8)
			throw new MyException("Too short password!");
		for(int i=0;i<y.length();i++){
			if(y.charAt(i)>='0'&&y.charAt(i)<='9'){
				ctd++;
			}
			if(y.charAt(i)>='A'&&y.charAt(i)<='Z')
				ctu++;
			if(y.charAt(i)>='a'&&y.charAt(i)<='z')
				ctl++;
		}
		if(ctd==0&&ctl==0&&ctu==0)
			throw new MyException("No Digit , no uppercase and no lower case!");
		else if(ctd==0&&ctl==0)
			throw new MyException("No Digit and no lowercase!");
		else if(ctl==0&&ctu==0)
			throw new MyException("No lowercase and no uppercase!");
		else if(ctd==0&&ctu==0)
			throw new MyException("No digit and no uppercase!");
		else if(ctd==0)
			throw new MyException("No Digit!");
		else if(ctu==0)
			throw new MyException("No Uppercase character!");
		else if(ctl==0)
			throw new MyException("No Uppercase character!");
		System.out.println("correct password");
	}
	catch(MyException e){
		System.out.println(e.getMessage());
	}
}}