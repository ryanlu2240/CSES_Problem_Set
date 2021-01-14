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

    vector<int> children;
    int n,x,t,ans=0;
    cin>>n>>x;
    while(n--){
        cin>>t;
        children.push_back(t);
    }
    sort(children.begin(), children.end());
    int r,l=0;
    r=children.size()-1;
    while(l<=r){
        if(children[l]+children[r]<=x){
            l++;
            r--;
        }
        else r--;
        ans++;
    }
    cout<<ans<<endl;
}
