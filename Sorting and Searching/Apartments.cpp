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

    int n, m, k, t, ans=0;
    cin>>n>>m>>k;
    multimap<int,int> applicants;
    multimap<int,int> apartments;
    // multimap<int,int>::iterator it;
    multimap<int,int>::iterator iter1,iter2;
    for(int i=0;i<n;i++){
        cin>>t;
        applicants.insert(make_pair(t,1));
    }
    for(int i=0;i<m;i++){
        cin>>t;
        apartments.insert(make_pair(t,1));
    }

    for(iter1=applicants.begin();iter1!=applicants.end();iter1++){
        for(iter2=apartments.begin();iter2!=apartments.end();iter2++){
            if(iter2->first >= iter1->first-k && iter2->first <= iter1->first+k ){
                // cout<<iter2->first<<endl;
                apartments.erase(iter2);
                ans++;
                break;
            }

        }
    }
    cout<<ans<<endl;





}
