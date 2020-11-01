#include<iostream>
using namespace std;
int letssolve(int n){
    if(n%2)
        return (n+1)/2;
    return n/2;
}
int main(){
    int t;
    cin>>t;
    int *output=new int[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        output[i]=letssolve(n);
    }
    for(int i=0;i<t;i++)
    cout<<output[i]<<endl;
}