#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    // k--;
    if(n%2==0 && k>n/2){

    }
    else{
        k--;
    }
    if(k<n/2){
        cout<<(2*k)+1;
    }
    else{
        cout<<"printed";
    }
    
    return 0;
}