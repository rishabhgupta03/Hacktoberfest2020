#include<iostream>
#include <stdio.h>
#include<string>
using namespace std;
int main(){
    int count1=0,count2=0,count3=0, traversal=0;
    string input;
    cin>>input;
    for(int i=0;i<input.length();i+=2){
        if(input[i]=='1'){
            count1++;
        }
        else if(input[i]=='2'){
            count2++;
        }
        else if(input[i]=='3'){
            count3++;
        }        
    }
    for(int i=0;i<count1;i++){
        input[traversal]='1';
        traversal+=2;
    }
    for(int i=0;i<count2;i++){
        input[traversal]='2';
        traversal+=2;
    }
    for(int i=0;i<count3;i++){
        input[traversal]='3';
        traversal+=2;
    }
    cout<<input;
    return 0;   
}