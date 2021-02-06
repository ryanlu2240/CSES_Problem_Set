#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#define ll long long

using namespace std;

int main(void){
    ll n,total=1;
    cin>>n;
    while(n--){
        total*=2;
        total = total % 1000000007;
    }
    cout<<total<<endl;
}
