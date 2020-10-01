C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes".
Example of a "Program to find out whether a matrix is sparse or not" in C language:
#include<stdio.h>
void main()
{
int i, j, rows, columns, a[10][10], total=0;
clrscr();
printf("\n please enter the number of rows and columns:");
scanf("%d %d", &i, &j);
printf("\nplease enter the matrix elements\n");

for(rows=0; rows<i; rows++)
{
for(columns=0; columns<j; columns++)
{
scanf("%d", &a[rows][columns]);
}
}
for(rows=0; rows<i; rows++)
{
for(columns=0; columns<j; columns++)
{
if(a[rows][columns]==0)
{
total++;
}
}
}
if(total>(rows*columns)/2)
{
printf("\n the matrix you entered is a sparse matrix");
}
else
{
printf("\n the matrix that you entered is not a sparse matrix");
}

getch();
}
