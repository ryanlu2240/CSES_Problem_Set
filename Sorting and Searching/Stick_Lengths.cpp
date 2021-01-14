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
    ll input[n];
    for(int i=0;i<n;i++) cin>>input[i];
    for(int i=0;i<n;i++) total+=input[i];
    ll min_diff=total;
    for(int i=0;i<n;i++){
        ll t=n*input[i];
        if(abs(total-t) < min_diff) min_diff=abs(total-t);
    }
    cout<<min_diff<<endl;
}
