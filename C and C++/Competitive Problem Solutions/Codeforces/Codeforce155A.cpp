#include<iostream>
using namespace std;
int main(){
    int n, ans=0 ,min=0,max=0;
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    min=max=input[0];
    for(int i=1;i<n;i++){
        if(input[i]<min)
        {ans++;
        min=input[i];}
        else if(input[i]>max)
        {ans++;
        max=input[i];
        }
    }
    cout<<ans;
    return 0;
}