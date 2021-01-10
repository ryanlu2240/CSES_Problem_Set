#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#define ll long long

using namespace std;

int Hanoi(int n, int from, int to, int buf, int count, vector<pair<int, int> > &his){
    int c = count+1;
    if(n==1){
        his.push_back(make_pair(from, to));
        return c;
    }
    else{
        c = Hanoi(n-1, from, buf, to, c, his);
        his.push_back(make_pair(from, to));
        c = Hanoi(n-1, buf, to, from, c, his);
    }
    return c;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,count;
    vector<pair<int, int> > his;
    cin>>n;
    count = Hanoi(n, 1, 3, 2, 0, his);
    cout<<count<<endl;
    for(int i=0;i<his.size();i++){
        cout<<his[i].first<<' '<<his[i].second<<endl;
    }

}
