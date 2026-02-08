#include<iostream>
using namespace std;

bool findkey(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key)
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int key;
    cout << "Enter the key to find it: " << endl;
    cin >> key;
    
    bool found = findkey(arr, size, key);
    
    if(found){
        cout << "Entered key is found." << endl;
    }
    else{
        cout << "Entered key is not found." << endl;
    }
    return 0;
}