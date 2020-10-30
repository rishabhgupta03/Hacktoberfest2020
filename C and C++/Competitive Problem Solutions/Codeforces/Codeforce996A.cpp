#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n>0){
        if(n>=100){
            n-=100;
            ans++;
        }
        else if(n>=20){
            n-=20;
            ans++;
        }
        else if(n>=10){
            n-=10;
            ans++;
        }
        else if(n>=5){
            n-=5;
            ans++;
        }
        else{
            ans+=n;
            n=0;
        }   
        // cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}