#include<iostream>
using namespace std;
int main(){
    double input[4], ans=0, flag=0;
    for(int i=0;i<4;i++)
    cin>>input[i];
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            if(input[i]==input[j]){
                flag=1;
                break;
            }
            else flag=0;
        }
        if(flag==0)
        {ans++;}
    }
    cout<<4-ans;
    return 0;
}