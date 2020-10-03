//Remove a word from the string by accepting the position from user.
import java.util.*;
class Remove_WORD
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a sentence");
        String v=sc.nextLine();
        System.out.println("Enter the Word position to remove");
        int x=sc.nextInt();
        String w=""; String s="";
        int i,c=0,words=0;char ch;
        int len=v.length();
        v.trim();
        
        for(i=0;i<len;i++)
        {
            ch=v.charAt(i);
            if(ch==' ')
              words++;
        }
        
        words+=1;

        if(x<=0 || x>words)          
            System.out.println("INVALID POSITION");
         
       else
       {
            for(i=0;i<len;i++)
            {
                ch=v.charAt(i);
                if(ch!=' ')
                    w=w+ch;
    
                if(ch==' '|| i==(len-1))
                {
    
                    if(w!="")
                        c++;
    
                    if(w!="" && c!=x)
                        s=s+" "+w;
    
                    w="";
                }
            }
    
            System.out.println("MODIFIED STRING: "+s.trim());
       }
    }
  
    /*
     
    EXAMPLE 1:
    ---------
    Enter a sentence
    My name is Moumita
    Enter the Word position to remove
    3
    MODIFIED STRING: My name Moumita
    
    EXAMPLE 2:
    ---------
    Enter a sentence
    My favourite color is blue
    Enter the Word position to remove
    6
    INVALID POSITION

    **/


}
