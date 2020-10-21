#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    getline(cin, input);
    for(int i=0;i<input.length();i++){
        if(input[i]=='W'&&input[i+1]=='U'&&input[i+2]=='B'){
            if(i!=0)
                cout<<" ";
            i+=2;
        }
        else
        {
            cout<<input[i];
        }   
    }
    return 0;   
}