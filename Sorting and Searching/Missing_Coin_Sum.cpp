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

    ll n,ans=1;
    cin>>n;
    ll coin[n];
    for(ll i=0;i<n;i++){
        cin>>coin[i];
    }
    sort(coin, coin+n);

    for(int i=0;i<n;i++){
        if(coin[i]<=ans){
            ans+=coin[i];
        }
        else break;
    }
    cout<<ans<<endl;

}
