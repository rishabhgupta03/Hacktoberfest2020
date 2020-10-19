#include<iostream>
#include <string>
using namespace std;
int main(){
    string input1,input2;
    cin>>input1>>input2;
    int flag=1;
    if(input1.length()!=input2.length()){
        cout<<"NO";
    }
    else{
        for(int i=0;i<input1.length();i++){
            if(input1[i]!=input2[input1.length()-i-1]){
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
    return 0;   
}