#include<iostream>
using namespace std;

int get_sqrt(int n){
    int target = n;
    int start = 0;
    int end = n;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
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
    cout << "Enter the value: ";
    cin >> n;

    int ans = get_sqrt(n);

    int precision;
    cout << "Enter the no. of digits of precision: ";
    cin >> precision;

    double step = 0.1;
    double final_ans = ans;
    for(int i = 0; i < precision; i++){
        for(double j = final_ans; j*j <= n; j = j + step){
            final_ans = j;
        }
        step = step/10;
    }

    cout << "The sqrt root of " << n << " is " << final_ans << endl;

    return 0;
}