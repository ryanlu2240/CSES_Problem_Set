#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include <string>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <iterator>
#define ll long long

using namespace std;


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int idx[200001];
    int input[200001];
    int a,b,n,m,ans,t;
    ans=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>input[i];
        idx[input[i]]=i+1;
    }
    idx[n+1]=n+1;
    for(int i=0;i<n;i++){
        if(idx[input[i]-1]>=idx[input[i]]) ans++;
    }
    ans+=1;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        a--;
        b--;
        bool a1=false,a2=false,b1=false,b2=false;
        if(idx[input[a]-1]>=idx[input[a]]) a1=true;
        if(idx[input[a]]>=idx[input[a]+1]) a2=true;
        if(idx[input[b]-1]>=idx[input[b]]) b1=true;
        if(idx[input[b]]>=idx[input[b]+1]) b2=true;
        t=idx[input[a]];
        idx[input[a]]=idx[input[b]];
        idx[input[b]]=t;
        t=input[a];
        input[a]=input[b];
        input[b]=t;
        if(idx[input[b]-1]>=idx[input[b]] && !a1) ans++;
        if(idx[input[b]-1]<idx[input[b]] && a1) ans--;
        if(idx[input[b]]>=idx[input[b]+1] && !a2) ans++;
        if(idx[input[b]]<idx[input[b]+1] && a2) ans--;

        if(idx[input[a]-1]>=idx[input[a]] && !b1) ans++;
        if(idx[input[a]-1]<idx[input[a]] && b1) ans--;
        if(idx[input[a]]>=idx[input[a]+1] && !b2) ans++;
        if(idx[input[a]]<idx[input[a]+1] && b2) ans--;

        if(a<b){
            if(input[a]+1==input[b]) ans++;
            if(input[a]-1==input[b]) ans--;
        }
        else{
            if(input[a]+1==input[b]) ans--;
            if(input[a]-1==input[b]) ans++;
        }

        cout<<ans<<endl;
    }
}
