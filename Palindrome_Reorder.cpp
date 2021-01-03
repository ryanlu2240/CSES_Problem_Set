#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#define ll long long

using namespace std;

int main(void){
    string s;
    string ans = "";
    int cnt[26];
    fill(cnt, cnt+26, 0);
    cin>>s;
    for(int i=0;i<s.size();i++){
        int idx = s[i]-65;
        cnt[idx]++;
    }
    bool f = false;
    char mid;
    if(s.size()%2==0){
        for(int i=0;i<26;i++){
            char a=i+65;
            if(cnt[i]%2==1){
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
            else for(int j=0;j<cnt[i]/2;j++) ans += a;
        }
    }
    else{
        for(int i=0;i<26;i++){
            char a=i+65;
            if(cnt[i]%2==1){
                if(f){
                    cout<<"NO SOLUTION"<<endl;
                    return 0;
                }
                f=true;
                mid=a;
                for(int j=0;j<cnt[i]/2;j++) ans += a;
            }
            else for(int j=0;j<cnt[i]/2;j++) ans += a;
        }
    }
    if(f) ans+=mid;
    if(s.size()%2==0) for(int i=ans.size()-1;i>=0;i--) ans+=ans[i];
    else for(int i=ans.size()-2;i>=0;i--) ans+=ans[i];
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;

}
