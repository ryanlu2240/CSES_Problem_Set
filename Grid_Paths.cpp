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

char board[2][2];

void print_board(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<board[i][j] <<' ';
        }
        cout<<endl;
    }
    cout<<endl;

}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    memset(board, '.', 4*sizeof(char));
    print_board(2);



}
