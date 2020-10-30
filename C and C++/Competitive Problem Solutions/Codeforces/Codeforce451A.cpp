#include<iostream>
using namespace std;
int chances=0;
void callfunc(int m, int n){
    if(m==1||n==1){
        if(chances%2==0){
            cout<<"Akshat";
        }
        else{
            cout<<"Malvika";
        }
        return;
    }
    chances++;
    callfunc(m-1,n-1);
}
int main(){
    int m,n;
    cin>>m>>n;
    callfunc(m,n);
    return 0;
}