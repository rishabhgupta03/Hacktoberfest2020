#include<iostream>
using namespace std;
class twoint{
    public:
    int enemy=0;
    int bonus=0;
};
twoint* sortit(twoint* input, int n){
    twoint temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(input[j].enemy>input[j+1].enemy){
                temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
    return input;
}
int main(){
    int s, n,flag=1;
    cin>>s>>n;
    twoint* input=new twoint[n];    
    for(int i=0;i<n;i++){
        cin>>input[i].enemy>>input[i].bonus;
    }
    input=sortit(input,n);
    for(int i=0;i<n;i++){

        if(s<=input[i].enemy){
            flag=0;
            cout<<"NO";
            break;
        }
        s=s+input[i].bonus;
    }
    if(flag)
    cout<<"YES";
    return 0;
}