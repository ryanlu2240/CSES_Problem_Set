#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#define ll long long

using namespace std;

int main(void){
    ll n,x,y,ans;
    cin>>n;
    while(n--){
        cin>>y;
        cin>>x;
        if(x>=y){
            if(x%2==1){
                ans = x * x - y + 1;
            }
            else{
                ans = (x-1) * (x-1) + 1 + y - 1;
            }
        }
        else{
            if(y%2==0){
                ans = y * y - x + 1;
            }
            else{
                ans = (y-1) * (y-1) + 1 + x - 1;
            }
        }
        cout<<ans<<endl;
    }
}
