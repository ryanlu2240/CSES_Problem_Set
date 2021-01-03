#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#define ll long long

using namespace std;

int main(void){
    ll n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if((a+b)%3==0 && max(a,b)-min(a,b)<=min(a,b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
