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

    vector<pair<int,int> > input;
    int n,x,t;
    bool find=false;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>t;
        input.push_back(make_pair(t,i));
    }
    sort(input.begin(), input.end());
    int l=0,r=input.size()-1;
    while(l<r){
        if(input[l].first+input[r].first==x){
            cout<<min(input[l].second,input[r].second)<<' '<<max(input[l].second,input[r].second)<<endl;
            find=true;
            break;
        }
        else if(input[l].first+input[r].first > x) r--;
        else if(input[l].first+input[r].first < x) l++;
    }
    if(!find) cout<<"IMPOSSIBLE"<<endl;


}
