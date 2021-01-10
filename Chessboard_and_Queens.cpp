#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <unistd.h>
#define ll long long

using namespace std;


void solve(int remain, int col, int row[8], int right_diagonal[16], int left_diagonal[16], int &count, int board[8][8]){
    if(remain==0){
        count++;
        return;
    }
    for(int i=0;i<8;i++){
        if(!row[i] && !right_diagonal[col+i] && !left_diagonal[8-i+col-1] && !board[i][col]){
            board[i][col]=1;
            row[i] = 1;
            right_diagonal[col+i] = 1;
            left_diagonal[8-i+col-1] = 1;
            solve(remain-1, col+1, row, right_diagonal, left_diagonal, count, board);
            board[i][col]=0;
            row[i] = 0;
            right_diagonal[col+i] = 0;
            left_diagonal[8-i+col-1] = 0;
        }
    }
}


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int row[8], col[8], right_diagonal[16], left_diagonal[16], count=0, queen=0, board[8][8];;
    string input[8];
    memset(row, 0, 8*sizeof(int));
    memset(right_diagonal, 0, 16*sizeof(int));
    memset(left_diagonal, 0, 16*sizeof(int));
    memset(board, 0, 64*sizeof(int));

    for(int i=0;i<8;i++){
        cin>>input[i];
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(input[i][j]=='*'){
                board[i][j]=1;
                queen++;
            }
        }
    }
    solve(8, 0, row, right_diagonal, left_diagonal, count, board);
    cout<<count<<endl;



}
