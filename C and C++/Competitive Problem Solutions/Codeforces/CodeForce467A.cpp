#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int capacity, occupied;
        cin>>occupied>>capacity;
        if (capacity-occupied>=2&&occupied>=0&&capacity>=0){
            ans++;
        }
    }
    cout<<ans;
    return 0;   
}