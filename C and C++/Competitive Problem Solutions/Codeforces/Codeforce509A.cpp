#include<iostream>
using namespace std;
int letssolve(int** a, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
    }
    return a[n-1][n-1];
}
int main(){
    int n;
    cin>>n;
    int **input= new int*[n];
    for(int i=0;i<n;i++){
        input[i]=new int[n];
    }
    cout<<letssolve(input,n);
    return 0;
}