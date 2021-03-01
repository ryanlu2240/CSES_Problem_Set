#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
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

    multiset<int> towers;
    multiset<int>::iterator itup;
    ll n,t;
    cin>>n;
    while(n--){
        cin>>t;
        itup = towers.upper_bound(t);
        if(itup!=towers.end()){
            towers.erase(itup);
            towers.insert(t);
        }
        else{
            towers.insert(t);
        }
    }
    cout<<towers.size()<<endl;

}
