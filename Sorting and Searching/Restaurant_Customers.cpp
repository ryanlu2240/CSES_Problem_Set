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

    multimap<int,int> cus;
    multimap<int,int>::iterator iter;
    int n,in,out,cur=0,max=0;
    cin>>n;
    while(n--){
        int t;
        cin>>in>>out;
        cus.insert(make_pair(in,1));
        cus.insert(make_pair(out,0));
    }
    for(iter=cus.begin();iter!=cus.end();iter++){
        if(iter->second) cur++;
        else cur--;
        if(cur>max) max=cur;
    }
    cout<<max<<endl;

}
