#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#define ll long long

using namespace std;

bool board[7][7];
ll c = 0;
ll step = 0;
string s;

void search(int row, int col){
    if(step == 48){
        if(col==0 && row==6) c++;
        return;
    }
    if(board[row][col]) return;
    if((row>0 && !board[row-1][col]) && (row+1 < 7 && !board[row+1][col]) && !(col>0 && !board[row][col-1]) && !(col+1 < 7 && !board[row][col+1])) return; //can only go up and down
    if((col>0 && !board[row][col-1]) && (col+1 < 7 && !board[row][col+1]) && !(row>0 && !board[row-1][col]) && !(row+1 < 7 && !board[row+1][col])) return; //can only go left ans right
    if(board[6][0] && step<48) return; //the destination board[6][0] is already reserved
    board[row][col] = true;
    if(s[step]!='?'){
        if(s[step] == 'U'){
            if(row>0 && !board[row-1][col]){ //UP
                step++;
                search(row-1, col);
                step--;
            }
        }else if(s[step] == 'D'){
            if(row+1 < 7 && !board[row+1][col]){ //DOWN
                step++;
                search(row+1, col);
                step--;
            }
        }else if(s[step] == 'L'){
            if(col>0 && !board[row][col-1]){ //LEFT
                step++;
                search(row, col-1);
                step--;
            }
        }else if(s[step] == 'R'){
            if(col+1<7 && !board[row][col+1]){ //RIHGT
                step++;
                search(row, col+1);
                step--;
            }
        }
        board[row][col] = false;
        return;
    }
    if(row>0 && !board[row-1][col]){ //UP
        step++;
        search(row-1, col);
        step--;
    }
    if(row+1 < 7 && !board[row+1][col]){ //DOWN
        step++;
        search(row+1, col);
        step--;
    }
    if(col>0 && !board[row][col-1]){ //LEFT
        step++;
        search(row, col-1);
        step--;
    }
    if(col+1<7 && !board[row][col+1]){ //RIHGT
        step++;
        search(row, col+1);
        step--;
    }
    board[row][col] = false;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>s;
    memset(board, false, 49*sizeof(bool));
    search(0,0);
    cout<<c<<endl;

}
