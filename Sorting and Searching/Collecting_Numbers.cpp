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
    int idx[200001];
    int input[200001];
    int n,ans;
    ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input[i];
        idx[input[i]]=i+1;
    }
    for(int i=0;i<n;i++){
        if(idx[input[i]-1]>=idx[input[i]]) ans++;
    }
    cout<<ans+1<<endl;
}
