import java.util.*;
public class CheckPrime{
    public  static void  main(String[] args) {
        int x,count=0;
        System.out.println("Enter the number");
        Scanner input=new Scanner(System.in);
        x=input.nextInt();
        for(int i=1;i<=x;i++){
            if(x%i==0){
                count+=1;
                    }
                }            
        if(count>2 || count==1){
            System.out.println(x +" is not a prime number");
        }
        else{
            System.out.println(x +" is  a prime number");
        }
    }
}
