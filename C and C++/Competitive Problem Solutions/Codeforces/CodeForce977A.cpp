#include<iostream>
using namespace std;
int main(){
    int input,n;
    cin>>input>>n;
    for(int i=0;i<n;i++){
        if(input%10==0){
            input/=10;
        }
        else{
            input--;
        }
    }
    cout<<input;
    return 0;   
}