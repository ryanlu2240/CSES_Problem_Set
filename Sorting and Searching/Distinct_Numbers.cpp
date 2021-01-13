#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include <string>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#define ll long long

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,ans=0;
    cin>>n;
    map<int, int> m;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(!m[t]){
            ans++;
            m[t]=1;
        }
    }
    cout<<ans<<endl;

}
