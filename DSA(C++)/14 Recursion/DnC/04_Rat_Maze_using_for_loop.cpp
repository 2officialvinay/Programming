#include<bits/stdc++.h>
using namespace std;

// Direction arrays
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
char direction[4] = {'D', 'L', 'R', 'U'};

bool isSafe(int i, int j, int row, int col, vector<vector<int>> &maze, vector<vector<bool>> &visited){ 
    if((i >=0 && i < row) && (j >= 0 && j < col) && (maze[i][j] == 1) && (visited[i][j] == false)){
        return true;
    }
    else{
        return false;
    }
}

void solveMaze(vector<vector<int>> &maze, int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output){
    // Base Case...
    if(i == row - 1 && j == col - 1){
        path.push_back(output);
        return;
    }
    for(int k = 0; k<4; k++){
        int newx = i + dx[k];
        int newy = j + dy[k];
        char dir = direction[k];

        if(isSafe(newx, newy, row, col, maze, visited)){
            visited[newx][newy] = true;
            solveMaze(maze, row, col, newx, newy, visited, path, output + dir);
            // Bactracking...
            visited[newx][newy] = false;
        }
    }
}

vector<string> findPath(vector<vector<int>> &maze, int n){
    int row = n;
    int col = n;

    vector<string> path;
    string output = "";

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    if(maze[0][0] == 0){
        return path;
    }

    // Let's mark true first position of visited array...
    visited[0][0] = true;

    solveMaze(maze, row, col, 0, 0, visited, path, output);
    return path;
}

int main(){
    int n = 4;
    vector<vector<int>> maze{{1,0,0,0},
                             {1,1,0,1},
                             {1,1,0,0},
                             {0,1,1,1}};

    vector<string> path = findPath(maze, n);

    cout << "The ways to reach to the destination is/are:" << endl;
    for(auto i:path){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}