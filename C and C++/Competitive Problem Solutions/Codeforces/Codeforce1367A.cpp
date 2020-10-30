#include<iostream>
#include <string>
using namespace std;
void printstring(string input){
    string output="";
    output+=input[0];
    for(int i=1;i<=input.length()-2;i+=2){
        output+=input[i];
    }
    output+=input[input.length()-1];
    cout<<output<<endl;
}
int main(){
    int n;
    cin>>n;    
    string* input=new string[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    for(int i=0;i<n;i++){
        printstring(input[i]);
    }
    return 0;
}