#include<iostream>
#include<string>
using namespace std;

int fun(string input){
    int count=0, ans=0;
    for(int i=0;i<=input.length();i++){
        if(input[i]=='x'){
            count++;
        }
        else{
            if(count>=3){
                ans+=count-2;
            }
            count=0;
        }
    }
    return ans;
}

int main(){
    int n, flag=0;
    cin>>n;
    string input;
    cin.ignore();
    getline(cin,input);
    int ans=fun(input);
    cout<<ans;
    return 0;
}