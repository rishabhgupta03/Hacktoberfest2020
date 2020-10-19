#include<iostream>
using namespace std;
int finddigitcount(long long int n){
    long long int ans=0;
    while (n>0){
        int digit=n%10;
        n/=10;
        if(digit==4||digit==7)
        ans++;
    }
    return ans;
}
void tochecklucky(int n){
    int flag=1;
    while(n>0){
        int digit=n%10;
        n/=10;
        if(digit==4 || digit==7){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
        
    }
    if(flag==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    
}
int main(){
    long long int n;
    cin>>n;
    int digitcount=finddigitcount(n);
    tochecklucky(digitcount);
    return 0;   
}