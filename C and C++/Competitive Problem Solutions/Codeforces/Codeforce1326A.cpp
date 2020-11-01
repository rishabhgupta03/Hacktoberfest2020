#include<iostream>
using namespace std;

void fun(int n){
    if(n==1){
        cout<<"-1";
    }
    else{
        cout<<"2";
        for(int i=0;i<n-1;i++)
        cout<<"3";
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        fun(n);
        cout<<endl;
    }
    return 0;
}