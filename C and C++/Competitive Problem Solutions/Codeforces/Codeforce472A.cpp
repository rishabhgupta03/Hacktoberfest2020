#include<iostream>
using namespace std;
bool isPrime(int n){ 
    if (n <= 1)  return false; 
    for (int i=2; i<n; i++) 
        if (n%i == 0) 
            return false;   
    return true; 
}
int main(){
    int n;
    cin>>n;
    for(int i=4;i<=n/2;i++){
        if(!isPrime(i)&&!isPrime(n-i))
        {cout<<i<<" "<<n-i;
        break;}
    }
    return 0;
}