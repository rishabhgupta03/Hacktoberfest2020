#include<iostream>
using namespace std;
int letssolve(int* a, int n){
    int ans=0, count=0;
    for (int i = 0; i < n; i++){
        if(a[i]>0){
            count+=a[i];
        }
        else{
            if(count<=0){
                ans++;
            }
            else{
                count--;
            }
        }
    }
    
    return ans;
}
int main(){
    int n;
    cin>>n;
    int *input= new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<letssolve(input,n);
    return 0;
}