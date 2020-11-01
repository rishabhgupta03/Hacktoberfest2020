#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string input;
    cin.ignore();
    getline(cin,input);
    int count1=0,count0=0;
    for(int i=0;i<n;i++){
        if(input[i]=='n'){
            count1++;
        }
        else if(input[i]=='r'){
            count0++;
        }
    }
    for(int i=0;i<count1;i++){
        cout<<"1 ";
    }
    for(int i=0;i<count0-1;i++)
    cout<<"0 ";
    if(count0>0)
    cout<<"0";
    return 0;
}