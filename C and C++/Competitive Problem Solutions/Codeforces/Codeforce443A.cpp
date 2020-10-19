#include<iostream>
#include <string.h>
#include <ctype.h>
#include <unordered_map>
using namespace std;
int main(){
    int ans=0;
    unordered_map<char,int> data;
    char* input= new char[1000];
    cin.get(input,1000);
    for(int i=0;i<strlen(input);i++){
        if(isalpha(input[i]))
        data[input[i]]++;
    }
    for(auto i: data){
        ans++;
    }
    cout<<ans;
    return 0;
}