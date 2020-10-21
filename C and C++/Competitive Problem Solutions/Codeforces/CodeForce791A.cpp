#include<iostream>
using namespace std;
int main(){
    int a, b, ans=0;
    cin >> a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        ans++;
    }
    cout<<ans;
    return 0;   
}