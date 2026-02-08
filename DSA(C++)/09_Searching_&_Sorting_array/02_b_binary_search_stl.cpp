#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    // Using vector...
    int n;
    vector<int>arr{1,2,3,4,5,6,7,8,9};
    cout << "Enter the element you want to search: ";
    cin >> n;

    if(binary_search(arr.begin(), arr.end(), n)){
        cout << "The element is found." << endl;  
    }
    else{
        cout << "The element is not found." << endl;
    }

    // Same concept using array....
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    if(binary_search(array, array + size, n)){
        cout << "The element is found." << endl;  
    }
    else{
        cout << "The element is not found." << endl;
    }

    return 0;
}