#include<iostream>
#include <string>
#include <string.h>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>data;
    string input;
    cin>>input;
    for(int i=0;i<n;i++){
        data[tolower(input[i])-96]++;
    }
    int flag=1;
    for(int i=1;i<=26;i++){
        if(data[i]==0){
            flag=0;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}