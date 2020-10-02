#include<bits\stdc++.h>
using namespace std;

int sur(int n){
    if (n<10)
        return n;
    return(sur(n/10) + n%10);
}

int main(){
    int n;
    cout<<"enter number:"<<" ";
    cin>>n;
    cout<<sur(n);
}
