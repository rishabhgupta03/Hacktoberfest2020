#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int*input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int sum=(input[0]%2)+(input[1]%2)+(input[2]%2);
    if(sum>1){
        for(int i=0;i<n;i++){
            if(input[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(input[i]%2==1){
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}