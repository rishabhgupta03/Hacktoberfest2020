#include<bits\stdc++.h>

using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        ll m2 = max((arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5]) ,(arr[n-1]*arr[n-2]*arr[n-3] * arr[0] * arr[1]));
        cout<<max(m2 ,(arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1]))<<endl;
    }
    return 0;
}
