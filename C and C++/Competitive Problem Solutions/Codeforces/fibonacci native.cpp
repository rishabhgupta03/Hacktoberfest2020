#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    if (n<=1){
        return n;
    }
    else{
        int a,b,current;
        a = 0;
        b = 1;
        for (int i=2; i<n+1;i++){
            current=a+b;
            a=b;
            b=current;
        }
    cout<<current;
    }
    return 0;
}
