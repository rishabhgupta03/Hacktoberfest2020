#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, Acount=0,Dcount=0;
    cin>>n;
    string input;
    cin>>input;
    for(int i=0;i<input.length();i++){
        if(input[i]=='A'){
            Acount++;
        }
        else{
            Dcount++;
        }
        
    }
    if(Acount==Dcount)
    cout<<"Friendship";
    else if (Acount>Dcount)
    cout<<"Anton";
    else
    cout<<"Danik";
    
    return 0;   
}