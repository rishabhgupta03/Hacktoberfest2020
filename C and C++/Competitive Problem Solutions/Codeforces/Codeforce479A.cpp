#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<max(max(a+b+c,a*(b+c)),max(c*(b+a),a*b*c));
}