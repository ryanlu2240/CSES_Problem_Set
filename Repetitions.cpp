#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main(void){
    string s;
    cin>>s;
    int t = 1;
    int max = 1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            t +=1;
            if(t>max) max=t;
        }
        else t=1
    }
    cout<<max<<endl;
}
