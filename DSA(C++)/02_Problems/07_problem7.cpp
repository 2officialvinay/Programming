#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,2,-3,4,-5,6};
    int l = 0, h = arr.size() - 1;
    cout << "The given array is: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    while(l<=h){
        if(arr[l] < 0){
            l++;
        }
        else if(arr[h] > 0){
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }
    }

    cout << "The converted array is: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}