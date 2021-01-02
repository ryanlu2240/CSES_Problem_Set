#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#define ll long long

using namespace std;

int main(void){
    ll n,total;
    cin>>n;
    total = (n+1) * n / 2;
    if(total%2==0){
        ll sum = 0;
        vector<ll> ans1;
        vector<ll> ans2;
        for(ll i=n;i>0;i--){
            if(sum+i <= total/2){
                ans1.push_back(i);
                sum+=i;
            }
            else ans2.push_back(i);

        }
        sort(ans1.begin(), ans1.end());
        sort(ans2.begin(), ans2.end());
        cout<<"YES"<<endl;
        cout<<ans1.size()<<endl;
        for(int i=0;i<ans1.size();i++){
            cout<<ans1[i]<<' ';
        }
        cout<<endl;
        cout<<ans2.size()<<endl;
        for(int i=0;i<ans2.size();i++){
            cout<<ans2[i]<<' ';
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
