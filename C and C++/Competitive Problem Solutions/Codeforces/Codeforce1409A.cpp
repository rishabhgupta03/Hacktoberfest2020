#include<iostream>
#include <math.h>
using namespace std;
long int letssolve(long int a){
    return (a+9)/10;
}
int main(){
    int n;
    cin>>n;
    int *answers=new int[n];
    for(int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        answers[i]=letssolve(abs(a-b));
    }
    for(int i=0;i<n;i++)
    cout<<answers[i]<<endl;
    return 0;
}