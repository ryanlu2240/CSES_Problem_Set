#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#define ll long long

using namespace std;

ll pow_ll(ll base, ll pow){
    if(pow == 0) return 1;
    ll a=1;
    while(pow--){
        a*=base;
    }
    return a;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
        ll k, idx=0, dig=1;
        cin>>k;
        while(idx<k){
            if(idx + dig*9*pow_ll(10,dig-1) > k || LLONG_MAX - dig*9*pow_ll(10,dig-1) < idx) break;
            idx += dig*9*pow_ll(10,dig-1);
            dig++;
        }

        ll gap, nu_gap, last_nu, tar_nu, nu_offset;
        gap = k-idx;
        nu_gap = gap / dig;
        nu_offset = gap % dig;
        if(nu_offset!=0){
            nu_gap++;
            nu_offset = dig - nu_offset;
        }
        last_nu = pow_ll(10, (dig-1)) - 1;
        tar_nu = last_nu + nu_gap;
        while(nu_offset--) tar_nu/=10;
        cout<<tar_nu%10<<endl;

    }



}
