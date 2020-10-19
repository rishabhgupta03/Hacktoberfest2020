#include<iostream>
#include <string>
using namespace std;
int main(){
    string input1,input2,output;
    cin>>input1>>input2;
    for(int i=0;i<input1.length();i++){
        if(input1[i]!=input2[i]){
            output+='1';
        }
        else{
            output+='0';
        }
    }
    cout<<output;
    return 0;   
}