#include<iostream>
using namespace std;
int main(){
    int n,k,time=240,i;
    cin>>n>>k;
    time-=k;
    for(i=1;i<=n;i++){
        if(time<5*i){
            break;
        }
        time-=5*i;
    }
    cout<<i-1;
    return 0;
}