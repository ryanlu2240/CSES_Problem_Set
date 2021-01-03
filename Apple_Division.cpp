#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#define ll long long

using namespace std;

ll findans(ll *arr, ll currsum, ll totalsum, int i){
    if(i==0) return abs((totalsum - currsum) - currsum);
    return min(findans(arr, currsum+arr[i], totalsum, i-1), findans(arr, currsum, totalsum, i-1));
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,total=0;
    cin>>n;
    ll weight[n];
    for(int i=0;i<n;i++){
        cin>>weight[i];
        total+=weight[i];
    }
    cout<<findans(weight, 0, total, n-1)<<endl;
    return 0;
}
