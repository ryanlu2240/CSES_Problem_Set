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

    ll n,total=0;
    cin>>n;
    ll coin[n];
    for(ll i=0;i<n;i++){
        cin>>coin[i];
        total+=coin[i];
    }
    ll dp[2][total+1];
    memset(dp, 0, sizeof(dp));
    for(ll i=0;i<total+1;i++) dp[0][i]=0;
    for(ll i=0;i<2;i++) dp[i][0]=1;
    for(ll i=0;i<n;i++){
        for(ll j=1;j<total+1;j++){
            if(j-coin[i]>=0){
                dp[1][j]=dp[0][j] || dp[0][j-coin[i]];
            }
            else dp[1][j]=dp[0][j];
        }
        for(ll j=0;j<total+1;j++){
            dp[0][j]=dp[1][j];
        }
    }
    bool find=false;
    for(ll i=0;i<total+1;i++){
        if(!dp[1][i]){
            cout<<i<<endl;
            find=true;
            break;
        }
    }
    if(!find) cout<<total+1<<endl;





}
