#include<iostream>
#include<vector>
using namespace std;

int find_element(vector<int>arr){
    int result = 0;
    for(int i = 0; i<arr.size(); i++){
        result = result^arr[i];
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    vector<int>arr(n);

    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }

    int unique_element = find_element(arr);
    cout << "The unique element in the array is " << unique_element << endl;

    return 0;
}