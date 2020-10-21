#include<iostream>
using namespace std;
int main(){
    int k,l,m,n,d, ans=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0){
            ans++;
        }
    }
    cout<<ans;
    return 0;   
}