#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr){
    // Base Case...

    // Progression...
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j = 0; j < i; j++){
            cout << arr[j] << " ";
        }
    }
    
    // Recursive Relation...
    print(arr)

}

int main(){
    vector<int>arr{1,2,3,4,5};

    print(arr);

    return 0;
}