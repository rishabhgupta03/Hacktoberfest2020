#include<iostream>
#include <math.h>
using namespace std;
long int letssolve(long int a,long int b){
    long int ans=0;
    while(true){
        if(abs(b-a)<10&&abs(b-a)>0){
            ans++;
            break;
        }
        ans++;
        if(a>b)
        a-=10;
        else
        a+=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int *answers=new int[n];
    for(int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        answers[i]=letssolve(a,b);
    }
    for(int i=0;i<n;i++)
    cout<<answers[i]<<endl;
    return 0;
}