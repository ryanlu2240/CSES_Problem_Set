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

    ll cur_last,n,t,max_len=0,cur_len=0;
    map<int, int> table;
    map<int, int>::iterator iter;
    cin>>n;
    cur_last=-1;
    for(int i=0;i<n;i++){
        cin>>t;
        iter = table.find(t);
        if(iter!=table.end()){
            if(iter->second>cur_last){
                cur_last=iter->second;
                cur_len=i-cur_last;
                if(cur_len>max_len) max_len=cur_len;
            }
            else{
                cur_len++;
                if(cur_len>max_len) max_len=cur_len;
            }
        }
        else{
            cur_len++;
            if(cur_len>max_len) max_len=cur_len;
        }
        table[t]=i;
    }
    cout<<max_len<<endl;
    
}
