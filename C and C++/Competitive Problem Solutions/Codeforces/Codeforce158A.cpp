#include<iostream>
using namespace std;
int main(){
    int n,k,ans,zerocheck=0;
    cin>>n>>k;
    ans=k;
    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    if(input[k-1]==0){
        for(int i=0;i<=k;i++){
            if(input[i]==0){
                ans=i;
                break;
            }
        }
    }
    else if(n==k){
        ans=k;
    }
    else{
        for(int i=k;i<n;i++){
            if(input[i]==input[k-1]){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;   
}