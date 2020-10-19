#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,sum;
    cin>>a>>b>>c>>d;
    sum=max(max(a,b),max(c,d));
    if(sum-a){
        cout<<sum-a<<" ";
    }
    if(sum-b){
        cout<<sum-b<<" ";
    }
    if(sum-c){
        cout<<sum-c<<" ";
    }
    if(sum-d){
        cout<<sum-d<<" ";
    }
    return 0;
}