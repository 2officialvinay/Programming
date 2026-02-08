#include<iostream>
using namespace std;

int get_quotient(int m, int n){
    int s = 1;
    int e = m;
    int mid = s + (e-s)/2;
    int ans = 0;
    while(s<=e){
        if(mid*n == m){
            return mid;
        }
        else if(mid*n < m){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int dividend, diviser, quotient;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the diviser: ";
    cin >> diviser;
    quotient = get_quotient(dividend, diviser);

    int precision;
    cout << "Enter the precision digits: ";
    cin >> precision;

    double step = 0.1;
    double ans = quotient;
    for(int i = 0; i < precision; i++){
        for(double j = ans; j*diviser<=dividend; j = j + step){
            ans = j;
        }
        step = step/10;
    }

    cout << "The quotient is: " << ans << endl;
    return 0;
}