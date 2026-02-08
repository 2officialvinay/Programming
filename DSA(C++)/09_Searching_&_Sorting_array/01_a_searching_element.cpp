#include<iostream>
using namespace std;

int find_element(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2; // Instead of mid = (start + end)/2

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2; // Instead of mid = (start + end)/2
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int size = 10;
    int key;
    cout << "Enter the key you want to search in the array: ";
    cin >> key;

    int index_found = find_element(arr, size, key);

    if(index_found == -1){
        cout << "The element is not found." << endl;
    }
    else{
        cout << "The element found at " << index_found << " index." << endl;
    }

    return 0;
}