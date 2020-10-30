/*......substring removal game.*/
/*Alice and Bob play a game. They have a binary string s (a string such that each character in it is either 0 or 1). 
Alice moves first, then Bob, then Alice again, and so on.
During their move, the player can choose any number 
(not less than one) of consecutive equal characters in s and delete
 them.The game ends when the string becomes empty, and the score of each player is the number of 1-characters deleted by them.
Each player wants to maximize their score. Calculate the resulting 
score of Alice...*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int count=0;
    while(t--){
       string s;
        cin>>s;
        s.push_back('0');
        vector<int>a;
        int cc=0;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]=='1')
                cc++;
            else{
                a.push_back(cc);
                cc=0;
            }
        }
        sort(a.rbegin(),a.rend());
        int total=0;
        for(int i=0;i<(int)a.size();i++){
            if(i%2==0)
                total+=a[i];
        }
        cout<<total<<"\n";  //total is alice score
    }
    return 0;
}
