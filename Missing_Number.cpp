#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main(void){
    int n;
    cin>>n;
    ll input[n];
    for(int i=0;i<n-1;i++){
      cin>>input[i];
    }
    sort(input, input+n-1);
    for(int i=0;i<n;i++){
        if(input[i]!=i+1){
          cout<<i+1<<endl;
          break;
        }
    }
}
