#include<stdio.h>
int main()
{
int a[10][10],b[100],i,j,n,x,base,size,seg,off;
printf("Enter the segments count\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the %d size \n",i+1);
scanf("%d",&size);
a[i][0]=size;
printf("Enter the base address\n");
scanf("%d",&base);
a[i][1]=base;

for(j=0;j<size;j++)
        {
        x=0;
        scanf("%d",&x);
        base++;
        b[base]=x;
        }
}
printf("Enter the segment number and offset value \n");
scanf("%d%d",&seg,&off);
if(off<a[seg][0])
{
int abs=a[seg][1]+off;
printf("the offset is less than %d",a[seg][0]);
printf("\n %d + %d = %d\n",a[seg][1],off,abs);
printf("the element %d is at %d ",b[abs+1],abs);
}
else
{
printf("ERROR IN LOCATING");
}
}
