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
    vector<int> apartments;
    vector<int> applicants;
    for(int i=0;i<n;i++){
        cin>>t;
        applicants.push_back(t);
    }
    for(int i=0;i<m;i++){
        cin>>t;
        apartments.push_back(t);
    }
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    m--;
    n--;
    while(m>=0 && n>=0){
        // cout<<"m n: "<<m<<' '<<n<<endl;
        if(apartments[m]+k >= applicants[n] && apartments[m]-k <= applicants[n]){ //fit
            ans++;
            m--;
            n--;
        }
        else if(!(apartments[m]+k >= applicants[n]) && apartments[m]-k <= applicants[n]){ //house too small
            n--;
        }
        else if(apartments[m]+k >= applicants[n] && !(apartments[m]-k <= applicants[n])){ //house too big
            m--;
        }
        else cout<<"should not be print"<<endl;
    }
    cout<<ans<<endl;



}
