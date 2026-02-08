#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ans;
    vector<int>arr{1,3,4,2,2};

    for(int i = 0; i < arr.size(); i++){
        int index = abs(arr[i]);

        if(arr[index]<0){
            ans = index;
            break;
        }
        arr[index] *= -1;
    }
    
    cout << "The duplicate number found in array is: " << ans << endl;
    return 0;
}