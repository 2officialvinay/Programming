// Square root of perfect square...

#include<iostream>
using namespace std;

int get_sqrt(int n){
    int start = 0;
    int end = n;
    int mid = start + (end - start)/2;
    int target = n;
    int ans = -1;
    while(start <= end){
        if(mid*mid == target){
            return mid;
        }
        else if(mid*mid > target){
            end = mid - 1; 
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number: " ;
    cin >> n;

    int ans = get_sqrt(n);
    cout << "The sqrt root of " << n << " is " << ans << endl;
    return 0;
}