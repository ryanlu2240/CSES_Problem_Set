#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main(void){
    int n;
    cin >> n;
    if(n<=3 && n>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    else if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    else{
        for(int i=2;i<n+1;i=i+2){
            cout<<i<<' ';
        }
        for(int i=1;i<n+1;i=i+2){
            cout<<i<<' ';
        }
        cout<<endl;
    }
}
