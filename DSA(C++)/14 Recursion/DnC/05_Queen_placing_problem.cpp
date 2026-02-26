#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>> &board, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

bool isSafe(vector<vector<char>> &board, int row, int col, int n){
    int i = row;
    int j = col;
    
    // Checking for row...
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    // Checking for upleft diagonal...
    i = row;
    j = col;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    // Checking for downleft diaginal...
    i = row;
    j = col;
    while(i < n && j >=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve(vector<vector<char>> &board, int col, int n){
    // Base Case...
    if(col >=n){
        printSolution(board, n);
        return;
    }

    for(int row = 0; row < n; row++){
        if(isSafe(board, row, col, n)){
            board[row][col] = 'Q';
            // Recursive Solution...
            solve(board, col + 1, n);
            // Backtracking...
            board[row][col] = '-';
        }
    }
}

int main(){
    int n = 4;
    int col = 0;
    vector<vector<char>> board(n, vector<char>(n,'-'));
    // '-' => Empty Cell
    // 'Q' => Queen at the cell
    solve(board, col, n);

    return 0;
}