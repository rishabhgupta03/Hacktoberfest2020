#include<iostream>
using namespace std;
int main()
{
  int arr[30],size,pos,i,insert;
  cout<<"Enter array size: ";
  cin>>size;
  cout<<"Enter array elements: \n";
  for(i=0; i<size ; i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter the element to be inserted: ";
  cin>>insert;
  cout<<"Enter the position you wish to insert the new element: ";
  cin>>pos;
  for(i=size; i>pos; i--)
  {
    arr[i]=arr[i-1];
  }
  arr[pos]=insert;
  cout<<"Element inserted successfully";
  cout<<"Now the new array---";
  for(i=0; i<size+1; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
