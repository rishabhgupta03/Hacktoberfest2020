#include<iostream>
using namespace std;
int main(){
    int r, k,i=1;
    cin>>k>>r;
    while(true){
        if(i*k%10==0){
            cout<<i;
            break;
        }
        else if((i*k)%10==r){
            cout<<i;
            break;
        }
        i++;
    }
    return 0;
}