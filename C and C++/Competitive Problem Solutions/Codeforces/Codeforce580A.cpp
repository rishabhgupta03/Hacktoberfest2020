#include<iostream>
using namespace std;
int findmax(long long int* input, int n){
    int max=1,curr=1;
    for(int i=0;i<n-1;i++){
        if(input[i]<=input[i+1]){
            curr++;
        }
        else if(curr>max&&(input[i]>input[i+1]||i==n-2)){
            max=curr;
            curr=1;
        }
        else if(curr<max){
            curr=1;
        }
        // cout<<i<<" "<<curr<<endl;
    }
    if(curr>max)max=curr;
    return max;
}
int main(){
    int n;
    cin>>n;
    long long int* input=new long long int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<findmax(input,n);
    return 0;
}