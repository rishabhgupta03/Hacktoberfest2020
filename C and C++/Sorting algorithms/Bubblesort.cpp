#include<iostream>
using namespace std;
int main()
{
  int i,n,arr[10],temp;
  cout<<"Enter array size: "
  cin>>n;
  cout<<"Enter array elements: \n:"
  for(i=0;i<n;i++)
  {
    cin>>arr[i]
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-2;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp
      }
    }
  }
  cout<<"Sorted elements using bubble sort !";
  cout<<"Arranging in ascending order";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}k
