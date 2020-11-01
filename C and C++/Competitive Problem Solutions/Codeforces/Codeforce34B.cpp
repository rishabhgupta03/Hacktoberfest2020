#include<iostream>
#include <math.h>
using namespace std;
int findmin(int* input,int n){
    int ans=input[0];
    for(int i=1;i<n;i++){
        if(ans>input[i]){
            ans=input[i];
        }
    }
    return ans;
}

int fun(int*input,int n,int m){
    if(m==0){
        return 0;
    }
    int*smallinput=new int[n-1];
    int count=0, flag=0;
    for(int i=0;i<n;i++){
        if(input[i]==findmin(input,n)&&flag==0){
            flag=1;
            continue;
        }
        smallinput[count++]=input[i];
    }
    int sum=0,smallans=fun(smallinput,n-1,m-1);
    if(findmin(input,n)<0)
    sum+=(abs((findmin(input,n))));
    // cout<<sum<<" "<<smallans<<" "<<m<<endl;
    return sum+smallans;
}

int main(){
    int n, m;
    cin>>n>>m;
    int*input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<fun(input,n,m);
    return 0;
}