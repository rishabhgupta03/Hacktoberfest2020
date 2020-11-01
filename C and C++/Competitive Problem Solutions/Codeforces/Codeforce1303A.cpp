#include<iostream>
#include<string>
using namespace std;
int fun(string input){
    if((input[0]=='0'||input[0]=='1')&&input.length()==1){
        return 0;
    }
    int flag=0;
    int front=0,end=0;
    for(int i=0;i<input.length();i++){
        if(input[i]=='1'){
            flag=1;
        }
        if(input[i]=='0'&&flag==1){
            front++;
        }
    }
    for(int i=input.length()-1;i>=0;i--){
        if(input[i]=='1'){
            break;
        }
        end++;
    }
    if(end==input.length()){
        return 0;
    }
    return front-end;
}
int main(){
    int t;
    cin>>t;
    int*output=new int[t];
    for(int i=0;i<t;i++){
        string input;
        cin>>input;
        output[i]=fun(input);
    }
    for(int i=0;i<t;i++)
    cout<<output[i]<<endl;
    return 0;
}