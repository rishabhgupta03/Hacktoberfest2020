#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
void canitbemade(unordered_map<char,int> alphabets, string a, string b){
    int flag=1;
    for(int i=0;i<a.length();i++){
        if(alphabets[a[i]]==0){
            flag=0;
            break;
        }
        else{
            alphabets[a[i]]--;
        }
    }
    if(flag==0){
        cout<<"NO";
        return;
    }
    for(int i=0;i<b.length();i++){
        if(alphabets[b[i]]==0){
            flag=0;
            break;
        }
        else{
            alphabets[b[i]]--;
        }
    }
    for (auto i : alphabets) {
        if(i.second!=0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"NO";
        return;
    }
    else{
        cout<<"YES";
        return;
    }

}
int main(){
    unordered_map<char,int> alphabets;
    string input1, input2, input3;
    cin>>input1>>input2>>input3;
    for(int i=0;i<input3.length();i++){
        alphabets[input3[i]]++;
    }
    canitbemade(alphabets, input1, input2);
    return 0;
}