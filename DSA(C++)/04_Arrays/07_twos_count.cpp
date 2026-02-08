#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,5,4,2,5,6,2,3,5,6,2,3,5,6,2,5,8,9,2};
    int size = 20;
    int count = 0;

    for(int i = 0; i<size; i++){
        if(arr[i] == 2){
            count++;
        } 
    }
    cout << "The numbers of two's are: " << count << endl;
    return 0;
}