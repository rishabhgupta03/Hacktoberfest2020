#include <iostream>
#include <math.h>
using namespace std;
int nodigits(int n){
    int ans=0;
    while(n>0){
        if(n==0){
            ans++;
            break;
        }
        ans++;
        n/=10;
    }
    return ans;
}
int getno(int n){
        int ans=0;
    while(n>0){
        if(n==0){
            break;
        }
        if(n%10!=0){
            ans++;
        }
            n/=10;
    }
    return ans;
}
void printsum(int n){
    int no=nodigits(n), ans=getno(n);
    cout<<ans<<endl;
    for(int i=0;i<no;i++){
        int digit=(n%10);
        n/=10;
        if(digit!=0)
        cout<<digit*pow(10,i)<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    int* input=new int[t];
    for(int i=0;i<t;i++){
        cin>>input[i];
    }
    for(int i=0;i<t;i++){
        printsum(input[i]);
    }
    return 0;
}
