#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#define ll long long

using namespace std;

int main(void){
    ll n,ans=0;
    cin>>n;
    for(ll i=5;n/i>=1;i=i*5){
        ans+=n/i;
    }
    cout<<ans<<endl;
}
