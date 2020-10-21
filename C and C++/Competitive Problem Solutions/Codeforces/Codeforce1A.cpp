#include<iostream>
using namespace std;
int main(){
    int m, n, a, ncopy,mcopy;
    cin>>n>>m>>a;
    ncopy=n;
    long long unsigned int count1=0,count2=0;
    while(ncopy>0){
        ncopy-=a;
        count1++;
    }
    mcopy=m;
    while (mcopy>0){
        mcopy-=a;
        count2++;
    }
    cout<<count1*count2;
    return 0;   
}