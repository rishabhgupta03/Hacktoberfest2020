#include<iostream>
using namespace std;
int main()
{
int n,m,r,p,s=0,t=0;
cout<<"enter nos";
cin>>n>>m;
while(n!=0){
r=n%10;
s=s*10+r;
n=n/10;
p=m%10;
}
while(m!=0)
{  p=m%10;
   t=t*10+p;
   m=m/10;

}
int temp=s;
s=t;
t=temp;
cout<<s<<" "<<t;


}
