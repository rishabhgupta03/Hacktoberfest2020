#include <stdio.h>


int main()
{
    int n ;
    int rem;
    int arr[10];
    int count = 0;
    printf("enter a no:");
    scanf("%d",&n);
    
   for (int i = 0; i < 10; i++)
   {
       if (n==0)
       {
        //    arr[i]=0;
           break;
       }
       rem=n%2;
       n=n/2;
       arr[i]=rem;
       count++;
   }
   for (int i = count-1; i >=0 ; --i)
   {
       printf("%d",arr[i]);
   }
   printf("\n");
   
    return 0;
}