#include<iostream>
#include<string>
using namespace std;

void lastOccurence(string& s, char key, int i, int& ans){
    // Base Case...
    if(i > s.length()){
        return;
    }

    // Recursive Relation...
    if(s[i] == key){
        ans = i;
    }
    lastOccurence(s, key, i+1, ans);
}

int main(){
    string s = "abcddefdg";
    char key = 'd';
    int ans = -1;

    lastOccurence(s, key, 0, ans);

    cout << "The last Occurrence of the key is " << ans << endl;
    return 0;
}