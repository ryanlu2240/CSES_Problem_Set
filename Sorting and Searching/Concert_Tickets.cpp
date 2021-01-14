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

    multimap<int,int> ticket;
    multimap<int,int>::iterator itup;
    int n,m,t;
    cin>>n>>m;
    while(n--){
        int t;
        cin>>t;
        ticket.insert(make_pair(t,1));
    }
    while(m--){
        cin>>t;
        itup=ticket.upper_bound(t);
        if(itup==ticket.begin()) cout<<"-1"<<endl;
        else{
            cout<<(--itup)->first<<endl;
            ticket.erase(itup);
        }
    }

}
