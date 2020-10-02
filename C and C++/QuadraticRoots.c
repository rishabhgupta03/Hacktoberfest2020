//This is a code in C language which asks the user to give the coefficients of a quadratic equation.
//if the coeff. of x^2=0, the code returns that the entered eqn is not a quadratic.
//if the eqn is quadratic, the code calculates and gives the distinct/same/imaginary quadratic roots of the eqn.


#include <stdio.h>
#include<math.h>

int main()
{
     int a, b, c;                           // here,  a,b,c are the coefficients of the quadratic eqn the user provides.
     float w, r1, r2, D;               // D=discriminant,    r1,r2 are roots 1 and 2 resp.,     w=imaginary root
     
     printf("\nEnter the values for a, b and c respectively: ");
     scanf("%d %d %d", &a, &b, &c);
     printf("\n The given quadratic equation is %dx^2 + %dx + %d = 0 .",a,b,c);
     D = b * b - 4 * a * c;

            if(a == 0) {
                printf("\nSorry, this is not a quadratic equation.");
            }
            else{

                if(D > 0) {
                    r1 = (-b + sqrt(D))/(2 * a);
                    r2 = (-b - sqrt(D))/(2 * a);
                    printf("\nThe two distinct roots of the quadratic equation are %2.1f and %2.1f.", r1, r2);
                }

                else if(D == 0) {
                    r1 = -b/(2 * a);
                    printf("\nBoth roots of the quadratic equation are equal and hence are equal to %2.1f.", r1);
                }

                else {
                    r1 = -b/(2 * a);
                    w = sqrt(-D)/(2 * a);
                    printf("\n The two imaginary roots of the quadratic equation are %2.1f + %2.1fi and %2.1f - %2.1fi.", r1, w, r1, w);
                }
            }
            printf("\n Made By : ISHIKA GUPTA");
            
    return 0;
}
