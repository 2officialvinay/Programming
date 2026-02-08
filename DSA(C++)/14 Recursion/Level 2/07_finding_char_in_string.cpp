#include<iostream>
using namespace std;

int findKey(char ch[], int n, int i, char key){
    // Base Case...
    if(i >= n){
        return -1;
    }

    if(key == ch[i]){
        return i;
    }

    // Recursive Relation...
    findKey(ch, n, i+1, key);
}

int main(){
    char ch[12] = "VINAY SAINI";
    int n = 12;
    int i = 0;
    char key = 'S';

    cout << "The index of key is: " << findKey(ch, n, i, key) <<  endl;

    return 0;
}