#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // Initialising 1st array...
    vector<int>a{2,3,4,5,6,7,8};

    if(a.empty() == 0){
        cout << "Array is not empty." << endl;
    }
    else{
        cout << "Array is empty." << endl;
    }

    // Initialising 2nd array...
    vector<int>b{};

    if(b.empty() == 0){
        cout << "Array is not empty." << endl;
    }
    else{
        cout << "Array is empty." << endl;
    }

    return 0;
}