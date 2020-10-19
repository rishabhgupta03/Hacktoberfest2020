#include<iostream>
using namespace std;
int main(){
    int n, ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int first,second,third;
        cin>>first>>second>>third;
        if(first+second+third>1)
        ans++;
    }
    cout<<ans;
    return 0;
}