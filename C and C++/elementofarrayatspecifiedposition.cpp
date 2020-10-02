#include <stdio.h>
int main()
{
  int array[100], search, c, n; //declared and initalized an array with max size of elements 100
  // n is the array size to be entered by the user

  printf("Enter number of elements in array\n");
  scanf("%d", &n); //entering the value of n

  printf("Enter %d integer(s)\n", n); // for loop for entering the n elements in the array

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n"); 
  scanf("%d", &search); //input the number to search

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)   //traversing the array and finding the location of the element entered
    {
      printf("%d is present at location %d.\n", search, c);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}


