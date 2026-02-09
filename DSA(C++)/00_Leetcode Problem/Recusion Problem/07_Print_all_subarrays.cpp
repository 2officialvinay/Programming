#include<bits/stdc++.h>
using namespace std;

void print2(vector<int> &arr, int start, int end){
    // Base Case...
    if(end == arr.size()){
        return;
    }

    // Progression...
    for(int i = start; i <= end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Recursive Relation...
    print2(arr, start, end + 1);
}

void print1(vector<int> &arr, int start, int end){
   for(int i = 0; i < arr.size(); i++){
        print2(arr, i, i);
   }
}

int main(){
    vector<int>arr{1,2,3,4,5};

    print1(arr, 0, 0);

    return 0;
}