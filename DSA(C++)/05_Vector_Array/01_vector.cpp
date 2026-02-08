#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Creating a vector...
    vector<int>arr;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // Inserting elements in array....
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(7);

    // Printing elements...
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " " ;
    }

    cout << endl;
    
    // Removing element...
    arr.pop_back();

    // Printing elements...
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " " ;
    }

    return 0;
}