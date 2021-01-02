#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#define ll long long

using namespace std;

int main(void){
    ll n,ans,box;
    cin>>n;
    for(ll i=1;i<=n;i++){
      box = 0;
        ans = i*i*i*i - i*i;
        if(i>2){
            box = (i-1) * (i-2);
            box *= 2;
        }
        ans -= box*4;
        cout<<ans/2<<endl;
    }
}
