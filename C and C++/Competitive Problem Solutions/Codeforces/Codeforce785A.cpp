#include<iostream>
#include <string>
using namespace std;
int main(){
    int n, ans=0;
    cin>>n;
    string* input=new string[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
        if(input[i][0]=='T')
        ans+=4;
        else if(input[i][0]=='C')
        ans+=6;
        else if(input[i][0]=='O')
        ans+=8;
        else if(input[i][0]=='D')
        ans+=12;
        else
        ans+=20;
    }
    cout<<ans;
    return 0;
}