import java.util.Scanner;
public class leapyear {
    /*To determine whether a year is a leap year, follow these steps:
     1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
     2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
     3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
     4. The year is a leap year (it has 366 days).
     5. The year is not a leap year (it has 365 days).
     */
    public static void main(String[] args) {

    	int year;
    	Scanner scan = new Scanner(System.in);
    	System.out.println("Enter any Year:");
    	year = scan.nextInt();//year to be checked
    	scan.close();
        boolean isLeap = false;//to check for leap year

        if(year % 4 == 0)
        {
            if( year % 100 == 0)
            {
                if ( year % 400 == 0)
                    isLeap = true;
                else
                    isLeap = false;
            }
            else
                isLeap = true;
        }
        else {
            isLeap = false;
        }

        if(isLeap==true)//checking for leap year
            System.out.println(year + " is a Leap Year.");
        else
            System.out.println(year + " is not a Leap Year.");
    }
}