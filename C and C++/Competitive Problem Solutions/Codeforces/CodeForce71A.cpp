#include<iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string* input=new string[n+1];
    for(int i=0;i<=n;i++){
        getline(cin,input[i]);
    }
    string* output=new string[n+1];
    for(int i=0;i<=n;i++){
        if(input[i].length()<=10){
            cout<<input[i]<<endl;
            continue;
        }
        int len=input[i].length();
        cout<<input[i][0]<<input[i].length()-2<<input[i][len-1]<<endl;
    }
    return 0;
}