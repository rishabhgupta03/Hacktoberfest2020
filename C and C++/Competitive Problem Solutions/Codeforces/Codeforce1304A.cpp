#include<iostream>
#include<string>
using namespace std;
long long int absolute(long long int a, long long int b){
    if(a-b>0)
        return a-b;
    return b-a;
}
int fun(long long int x, long long int a){
    // cout<<x<<" "<<a<<" "<<x%a<<endl;
    if(x%a==0){
        // cout<<x/a<<endl;
        return x/a;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    int*output=new int[t];
    for(int i=0;i<t;i++){
        long long int a,b,x,y;
        cin>>x>>y>>a>>b;
        output[i]=fun(absolute(x,y),a+b);
    }
    for(int i=0;i<t;i++)
    cout<<output[i]<<endl;
    return 0;
}