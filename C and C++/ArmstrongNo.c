//An ARMSTRONG NO. is one whose sum of all digits to the power of no.of digits each= the no. itself.
//for eg. for a 3 digit no. an armstrong no. is one, whose sum of cubes of each digit= the no. itself

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("\nEnter a no. to check if it's an Armstrong number:");
    scanf("%d", &n);
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        sum = sum + lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }
    if (sum == n)
    {
        printf("\n%d is an Armstrong Number.\n\n", n);
    }
    else
        printf("\n%d is not an Armstrong Number.\n\n", n);
        printf("Made By:- ISHIKA GUPTA \n\n\n\n\n\n  ");


    return 0;
}
