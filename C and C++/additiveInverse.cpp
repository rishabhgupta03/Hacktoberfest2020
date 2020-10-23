//Program to finding additive inverse of a number
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n, i, z;
	printf("Enter the value of Z (Domain)\n");
	scanf("%d", &z);
	printf("Enter a number whose additive inverse you want to know.\n");
	scanf("%d", &n);
	if(n==0)
	printf("Additive inverse of %d is %d", n, z);
	for(i=0; i<z; i++)
	{
		if((n+i)%z==0)
		{
		printf("The additive inverse modulo %d is %d",z, i);
		break;
		}
	}
	
	return 0;
}