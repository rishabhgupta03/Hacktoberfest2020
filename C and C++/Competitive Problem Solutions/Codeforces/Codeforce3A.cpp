#include<iostream>
#include<math.h>
#include<string>
#include<vector>
using namespace std;
int main(){
    char x1,x2;
    int y1,y2;
    vector<string> output;
    cin>>x1>>y1>>x2>>y2;
    while(x1!=x2||y1!=y2){
        if(x1>x2){
            if(y1>y2){
                x1--;
                y1--;
                output.push_back("LD");
            }
            else if(y1==y2){
                x1--;
                output.push_back("L");
            }
            else{
                x1--;
                y1++;
                output.push_back("LU");
            }
        }
        else if(x1==x2){
            if(y1>y2){
                y1--;
                output.push_back("D");
            }
            else if(y1<y2){
                y1++;
                output.push_back("U");
            }
            
        }
        else{
            if(y1>y2){
                x1++;
                y1--;
                output.push_back("RD");
            }
            else if(y1==y2){
                x1++;
                output.push_back("R");
            }
            else{
                x1++;
                y1++;
                output.push_back("RU");
            }
        }
        // cout<<x1<<x2<<" "<<y1<<y2<<endl;
    }
    cout<<output.size()<<endl;
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<endl;
    }
    return 0;
}