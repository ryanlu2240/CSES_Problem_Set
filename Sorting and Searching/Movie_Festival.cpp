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

    vector<pair<ll,ll> > movies;
    ll n,in,out,ans=1,cur_end=0;
    cin>>n;
    while(n--){
        cin>>in>>out;
        movies.push_back(make_pair(out,in));
    }
    sort(movies.begin(),movies.end());
    cur_end=movies[0].first;
    for(int i=0;i<movies.size();i++){
        if(movies[i].second >= cur_end){
            ans++;
            cur_end=movies[i].first;
        }
    }
    cout<<ans<<endl;

}
