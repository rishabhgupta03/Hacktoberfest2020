#include<iostream>
using namespace std;
int ansfinder(int n, int m, int* input){
    int ans=0, houseiterator=1, i=0;
    for(int i=0;i<m;i++){
        if(houseiterator<input[i]){
            // cout<<input[i]-houseiterator<<" ";
            ans+=(input[i]-houseiterator);
        }
        else if(houseiterator>input[i]){
            // cout<<(n-houseiterator+input[i])<<" ";
            ans+=(n-houseiterator+input[i]);
        }
        // cout<<houseiterator<<" "<<input[i]<<" "<<ans<<endl;
        houseiterator=input[i];
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    int *input=new int[n];
    for(int i=0;i<m;i++){
        cin>>input[i];
    }
    cout<<ansfinder(n,m,input);
    return 0;
}