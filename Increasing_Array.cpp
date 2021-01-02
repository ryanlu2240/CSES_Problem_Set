#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main(void){
    ll n;
    cin >> n;
    ll input[n];
    for(int i=0;i<n;i++){
      cin>>input[i];
    }
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(input[i]<input[i-1]){
          ans += input[i-1]-input[i];
          input[i] = input[i-1];
        }
    }
    cout<<ans<<endl;
}
