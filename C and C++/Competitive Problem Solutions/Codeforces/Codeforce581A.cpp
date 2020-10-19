#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<min(m,n)<<" ";
    cout<<(max(m,n)-min(m,n))/2;
    return 0;
}