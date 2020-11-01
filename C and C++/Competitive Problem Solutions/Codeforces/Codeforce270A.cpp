#include<iostream>
using namespace std;
void letssolve(int n){
    if(n<=30){
        cout<<"NO"<<endl;
        return;
    }
    if(360%(180-n)==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    int *output=new int[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        letssolve(n);
    }
    // for(int i=0;i<t;i++)
    // cout<<output[i]<<endl;
}