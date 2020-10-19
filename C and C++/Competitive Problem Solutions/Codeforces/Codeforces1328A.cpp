#include<iostream>
using namespace std;
int stepscounter(int a, int b){
    if(a%b==0)
        return 0;
    return b-(a%b);
}
int main(){
    int t;
    cin>>t;
    int *output=new int [t];
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        output[i]=stepscounter(a,b);
    }
    for(int i=0;i<t;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}