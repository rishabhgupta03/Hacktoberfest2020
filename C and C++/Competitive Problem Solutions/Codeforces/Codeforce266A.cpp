#include<iostream>
#include <unordered_map> 
using namespace std;
int main(){
    unordered_map<char,int> distinct;
    string input;
    cin>>input;
    for(int i=0;i<input.length();i++){
        distinct[input[i]]++;
    }
    int count=0;
    for (auto i :distinct){
        // cout<<i.first<<" "<<i.second<<endl;
        if (i.second>0)
        count++;
    }
    if(count%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";    
    return 0;
}