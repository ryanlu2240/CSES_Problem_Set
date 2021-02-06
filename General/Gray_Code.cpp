#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#define ll long long

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    int gray[n];
    memset(gray, 0, n*sizeof(int));
    for(int j=n-1;j>=0;j--){
        cout<<gray[j];
    }
    cout<<endl;
    for(int i=2;i<=pow(2,n);i++){
        if(i%2==0){
            gray[0] = !gray[0];
        }
        else{
            for(int j=0;j<n;j++){
                if(gray[j]==1){
                    gray[j+1] = !gray[j+1];
                    break;
                }
            }
        }
        for(int j=n-1;j>=0;j--){
            cout<<gray[j];
        }
        cout<<endl;
    }

}
