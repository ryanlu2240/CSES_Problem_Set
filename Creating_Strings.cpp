//用遞迴來生成字串排列組合
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#define ll long long

using namespace std;

int n_factorial(int n){
	int ans=1;
	for(int x=1;x<=n;x++) ans*=x;
	return ans;
}

bool compare(string a, string b) {
    return a < b;
}

void perm(string s, int a, int b, vector<string> &aa){
    string t=s;
    for(int i=a;i<=b;i++){
          char c=t[a];
          t[a]=t[i];
          t[i]=c;
          if(b-a==0) aa.push_back(t);
          perm(t,a+1,b,aa);

    }
}

int main(void){
    string s,ans;
    vector<string> a;
    int combinations;
    int cnt[26];
    fill(cnt, cnt+26, 0);
    cin>>s;
    for(int i=0;i<s.size();i++){
        int idx = s[i]-97;
        cnt[idx]++;
    }
    ans = "";
    combinations = n_factorial(s.size());
    for(int i=0;i<26;i++){
        if(cnt[i]!=0) combinations/=n_factorial(cnt[i]);
    }
    cout<<combinations<<endl;
    for(int i=0;i<26;i++){
        if(cnt[i]!=0){
            combinations/=n_factorial(cnt[i]);
            char a=i+97;
            for(int j=0;j<cnt[i];j++) ans+=a;
        }
    }
    perm(ans,0,ans.size()-1,a);
    sort(a.begin(),a.end(),compare);
    cout<<a[0]<<endl;
    for(int i=1;i<a.size();i++){
        if(a[i]!=a[i-1]) cout<<a[i]<<endl;
    }


}
