#include<iostream>
class triplet{
    public:
    int first=0,second=0,third=0;
};
using namespace std;
int main(){
    int n;
    cin>>n;
    triplet ans, *input=new triplet[n];
    for(int i=0;i<n;i++){
        cin>>input[i].first>>input[i].second>>input[i].third;
        ans.first+=input[i].first;
        ans.second+=input[i].second;
        ans.third+=input[i].third;
    }
    if(ans.first==0&&ans.second==0&&ans.third==0){
        cout<<"YES";
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;   
}