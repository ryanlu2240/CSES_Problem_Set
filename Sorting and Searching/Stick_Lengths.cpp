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

    ll n,t,mid,ans=0;
    cin>>n;
    vector<ll> stick;
    while(n--){
        cin>>t;
        stick.push_back(t);
    }
    sort(stick.begin(),stick.end());
    if(stick.size()%2==0) mid=(stick[stick.size()/2] + stick[stick.size()/2 -1]) /2;
    else mid=stick[stick.size()/2];
    // cout<<mid<<endl;
    for(int i=0;i<stick.size();i++){
        ans+=abs(stick[i]-mid);
    }
    cout<<ans<<endl;

}
