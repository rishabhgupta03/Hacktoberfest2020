#include<iostream>
using namespace std;
int main(){
    int size, ans=1;
    cin>>size;
    int*input=new int[size];
    for(int i=0;i<size;i++)
        cin>>input[i];
    for(int i=1;i<size;i++){
        if(input[i]!=input[i-1]){
            ans++;
            continue;
        }
    }
    cout<<ans;
    return 0;
}