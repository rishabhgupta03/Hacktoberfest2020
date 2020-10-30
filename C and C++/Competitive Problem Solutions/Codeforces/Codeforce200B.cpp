#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    double n, sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int curr;
        cin>>curr;
        sum=sum+curr;
    }
    double ans=sum/n;
    cout<<ans;
    return 0;   
}