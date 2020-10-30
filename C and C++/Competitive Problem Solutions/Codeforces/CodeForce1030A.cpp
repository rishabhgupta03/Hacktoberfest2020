#include<iostream>
using namespace std;
void fun(int n){
    if(n%2==0){
        for(int i=1;i<n;i++){
            if(i%2==1){
                cout<<"I hate that ";
            }
            else{
                cout<<"I love that ";
            }
        }
        cout<<"I love it";
    }
    else{
        for(int i=1;i<n;i++){
            if(i%2==1){
                cout<<"I hate that ";
            }
            else{
                cout<<"I love that ";
            }
        }
        cout<<"I hate it";
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}