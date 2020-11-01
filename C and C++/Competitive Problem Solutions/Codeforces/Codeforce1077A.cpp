#include<iostream>
using namespace std;

long long int fun(long long int a,long long int b,long long int k){
    if(k%2==0)
        return k*(a-b)/2;
    return ((k+1)*0.5*a)-((k-1)*b*0.5);
}

int main(){
    int t;
    cin>>t;
    long long int*output=new long long int[t];
    for(int i=0;i<t;i++){
        long long int a,b,k;
        cin>>a>>b>>k;
        output[i]=fun(a,b,k);
    }
    for(int i=0;i<t;i++)
    cout<<output[i]<<endl;
    return 0;
}