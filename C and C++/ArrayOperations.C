#include<stdio.h>
#include<conio.h>
int n,arr[100],arr1[100],arr2[100],n1,n2,flag=0;
void create_array()
{
	int i;
	printf("Enter the size of array:- ");
	scanf("%d",&n);
	printf("Enter the array:- \n");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Created array :- ");
}
void display_array(int ar[],int size)
{
	int i;
	for( i=0;i<size;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
	getch();
}
void traversing()
{
	int i;
	for( i=0;i<n;i++)
	{
		printf("Element at position %d :- %d\n",i+1,arr[i]);
	}
	getch();
}
void insertion_array()
{
	int choice,elem,temp,temp1,i,pos;
	while(1)
	{
		clrscr();
		printf("Insertion Menu\n");
		printf("1. Insert at the start of the array\n");
		printf("2. Insert at the end of the array\n");
		printf("3. Insert at any position\n");
		printf("4. Back\n");
		printf("Enter the choice :- ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Original array:- ");
				display_array(arr,n);
				printf("Enter the element to be inserted at the start:- ");
				scanf("%d",&elem);
				temp=arr[0];
				arr[0]=elem;
				for(i=1;i<=n;i++)
				{
					temp1=arr[i];
					arr[i]=temp;
					temp=temp1;
				}
				n+=1;
				printf("New array:- ");
				display_array(arr,n);
				break;
			case 2:
				printf("Original array:- ");
				display_array(arr,n);
				printf("Enter the element to be inserted at the end:- ");
				scanf("%d",&elem);
				arr[n]=elem;
				n+=1;
				printf("New array:- ");
				display_array(arr,n);
				break;
			case 3:
				printf("Original array:- ");
				display_array(arr,n);
				printf("Enter the element to be inserted :- ");
				scanf("%d",&elem);
				printf("Enter the position :- ");
				scanf("%d",&pos);
				if(pos>n)
				{
					printf("Invalide position");
					getch();
				}
				else
				{
					temp=arr[pos-1];
					arr[pos-1]=elem;
					for(i=pos;i<=n;i++)
					{
						temp1=arr[i];
						arr[i]=temp;
						temp=temp1;
					}
					n+=1;
					printf("New array:- ");
					display_array(arr,n);
				}
				break;
			case 4:
				return;
			default:
				printf("Wrong Choice!\n");
				printf("Enter again");
		}
	}
}
void deletion_array()
{
	int choice,elem,temp,temp1,i,pos;
	while(1)
	{
		clrscr();
		printf("Deletion Menu\n");
		printf("1. Delete from the start of the array\n");
		printf("2. Delete from the end of the array\n");
		printf("3. Delete from any position\n");
		printf("4. Back\n");
		printf("Enter the choice :- ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Original array:- ");
				display_array(arr,n);
				for(i=0;i<n-1;i++)
				{
					arr[i]=arr[i+1];
				}
				n-=1;
				printf("New array:- ");
				display_array(arr,n);
				break;
			case 2:
				printf("Original array:- ");
				display_array(arr,n);
				n-=1;
				printf("New array:- ");
				display_array(arr,n);
				break;
			case 3:
				printf("Original array:- ");
				display_array(arr,n);
				printf("Enter the position from which element is to be deleted:- ");
				scanf("%d",&pos);
				if(pos>n)
				{
					printf("Invalid position");
					getch();
				}
				else
				{

					for(i=pos;i<n-1;i++)
					{
						arr[i]=arr[i+1];
					}
					printf("New array:- ");
					n-=1;
					display_array(arr,n);
				}
				break;
			case 4:
				return;
			default:
				printf("Wrong Choice!\n");
				printf("Enter again");
		}
	}
}
void copy_array()
{
	int arr1[100],i;
	printf("Original array:- ");
	display_array(arr,n);
	for( i=0;i<n;i++)
	{
		arr1[i]=arr[i];
	}
	printf("Copied Array:- ");
	display_array(arr1,n);
}
void reverse_array()
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("New Array:- ");
	display_array(arr,n);
}
void bubble(int arr[],int n)
{
	int i,j;
	for( i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void merge_array()
{
	int i,j,ans[200],k=0;
	printf("Enter the size of 1st array:- ");
	scanf("%d",&n1);
	printf("Enter the elements:- \n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the size of 2nd array:- ");
	scanf("%d",&n2);
	printf("Enter the elements:- \n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	bubble(arr1,n1);
	bubble(arr2,n2);
	for(i=0,j=0;i<n1&&j<n2;)
	{
		if(arr1[i]<arr2[j])
		{
			ans[k++]=arr1[i];
			i++;
		}
		else
		{
			ans[k++]=arr2[j];
			j++;
		}
	}
	if(i==n1)
	{
		for(;j<n2;j++)
		{
			ans[k++]=arr2[j];
		}
	}
	else
	{
		for(;i<n1;i++)
		{
			ans[k++]=arr1[i];
		}
	}
	printf("Merged Array:- ");
	display_array(ans,n1+n2);
}
void main()
{
	int choice;
	while(1)
	{
		clrscr();
		printf("Main Menu\n");
		printf("1. Create an array\n");
		printf("2. Traversing the array\n");
		printf("3. Insertion in array\n");
		printf("4. Deletion from array\n");
		printf("5. Copying the array to another\n");
		printf("6. Reversing the array\n");
		printf("7. Merging two arrays\n");
		printf("8. Exit\n");
		printf("Enter the choice:- ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create_array();
				flag=1;
				display_array(arr,n);
				break;
			case 2:
				if(flag==1)
				{
					traversing();
				}
				else
				{
					printf("Create an array first ");
					getch();
				}
				break;
			case 3:
				if(flag==1)
				{
					insertion_array();
				}
				else
				{
					printf("Create an array first ");
					getch();
				}
				break;
			case 4:
				if(flag==1)
				{
					deletion_array();
				}
				else
				{
					printf("Create an array first ");
					getch();
				}
				break;
			case 5:
				if(flag==1)
				{
					copy_array();
				}
				else
				{
					printf("Create an array first ");
					getch();
				}
				break;
			case 6:
				if(flag==1)
				{
					printf("Original array:- ");
					display_array(arr,n);
					reverse_array();
				}
				else
				{
					printf("Create an array first ");
					getch();
				}
				break;
			case 7:
				merge_array();
				break;
			case 8:
				exit(0);
				break;
			default:
				printf("Wrong Choice!\n\n");
				printf("Enter again\n");
				getch();
		}
	}
}