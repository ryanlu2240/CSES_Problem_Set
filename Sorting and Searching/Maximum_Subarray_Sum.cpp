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

    ll n;
    cin>>n;
    ll input[n];
    for(ll i=0;i<n;i++) cin>>input[i];
    ll l=0,r=0,max=LLONG_MIN,cur_sum=0;
    while(r<n){
        cur_sum+=input[r];
        if(cur_sum > max) max=cur_sum;
        if(cur_sum<0){
            l=r+1;
            cur_sum=0;
        }
        r++;
    }
    cout<<max<<endl;

}
