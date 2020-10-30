#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
void Caps2(char* input){
    for(int i=1;i<strlen(input);i++){
        input[i]=tolower(input[i]);
    }
}
void Caps(char* input){
    int flag=0;
    for(int i=0;i<strlen(input);i++){
        if(islower(input[i]))
        {flag=1;
        break;}
    }
    if(flag==0){
        for(int i=0;i<strlen(input);i++)
            input[i]=tolower(input[i]);
        return;
    }
    flag=0;
    if(strlen(input)==1){
        input[0]=toupper(input[0]);
        return;
    }
    for(int i=1;i<strlen(input);i++){
        if(isupper(input[i])){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){        
        input[0]=toupper(input[0]);
        for(int i=1;i<strlen(input);i++){
            input[i]=tolower(input[i]);
        }
    }
}
int main(){
    char input[300];
    cin>>input;
    Caps(input);
    for(int i=0;i<strlen(input);i++)
    cout<<input[i];
    return 0;
}