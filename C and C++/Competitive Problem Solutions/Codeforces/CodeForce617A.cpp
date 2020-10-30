#include<iostream>
using namespace std;
int main(){
    int input,ans=0;
    cin>>input;
    while (input>0){
        if(input>5){
            input-=5;
        }
        else{
            input=0;
        }
        ans=ans+1;
    }
    cout << ans;
    return 0;   
}