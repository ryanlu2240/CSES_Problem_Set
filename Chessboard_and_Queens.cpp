#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#define ll long long

using namespace std;


void print_board(int board[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<board[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int board[8][8];
    int safe[8][8];
    memset(board, 0, 64*sizeof(int));
    memset(safe, 0, 64*sizeof(int));
    print_board(board);
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        for(int j=0;j<8;j++){
            if(s[j]=='*') board[i][j]=1;
        }
    }
    print_board(board);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j]){
                for(int k=0;k<8;k++){
                    safe[i][k]=1;
                    safe[k][i]=1;
                }
            }
        }
    }
    cout<<endl;
    print_board(safe);



}
