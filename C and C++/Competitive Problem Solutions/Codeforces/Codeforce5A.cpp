#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    int ans=0,i=0;
    while(getline(cin,input)){
        if(input[0]=='+')
            i++;
        else if(input[0]=='-')
            i--;
        else 
            ans+=i*(input.size() - input.find(':') -1 );
    }
    cout<<ans;
}