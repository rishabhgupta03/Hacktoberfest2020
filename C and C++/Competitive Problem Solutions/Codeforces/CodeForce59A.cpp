#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;
int main(){
    int upper=0,lower=0;
    string input;
    cin>>input;
    for(int i=0;i<input.length();i++){
        if(isupper(input[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        for(int i=0;i<input.length();i++){
            input[i]=toupper(input[i]);
        }
    }
    else{
        for(int i=0;i<input.length();i++){
            input[i]=tolower(input[i]);
        }
    }
    for(int i=0;i<input.length();i++){
        cout<<input[i];
    }
    return 0;   
}