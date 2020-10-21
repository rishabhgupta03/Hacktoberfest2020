#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main(){
    string input,output;
    getline(cin, input);
    for(int i=0;i<input.length();i++){
        if(isupper(input[i])){
            input[i]=tolower(input[i]);
        }
        if (input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'||input[i]=='y'){
            continue;
        }
        else{
            output=output+'.'+input[i];
        }
    }
    cout<<output;
    return 0;   
}