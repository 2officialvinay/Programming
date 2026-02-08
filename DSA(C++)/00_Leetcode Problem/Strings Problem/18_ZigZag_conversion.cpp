#include<iostream>
#include<string>
#include<vector>
using namespace std;

string conversion(string s, int numRows){
    if(numRows == 1 || numRows >= s.size()){
        return s;
    }

    vector<string>zigzag(numRows);

    int row = 0, i = 0;
    bool direction = 1; // 1 means Top -> Bottom conversion...

    while(true){
        if(direction){
            while(row < numRows && i < s.size()){
                zigzag[row++].push_back(s[i++]);
            }
            row = numRows - 2;
        }
        else{
            while(row >= 0 && i < s.size()){
                zigzag[row--].push_back(s[i++]);
            }
            row = 1;
        }
        
        if(i >= s.size()) break;
        direction = !direction;
    }

    string ans = "";
    for(int i = 0; i < zigzag.size(); i++){
        ans += zigzag[i];
    }
    return ans;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    cout << "The zig-zag conversion is: " << conversion(s, numRows) << endl;

    return 0;
}