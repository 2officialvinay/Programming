#include<iostream>
using namespace std;

int main(){
    int nums[5];
    int* p;

    p = nums;
    *p = 10;

    p = &nums[2];
    *p = 20;

    p--;
    *p = 30;

    p = nums + 3;
    *p = 40;

    p = nums;
    *(p + 4) = 50;

    for(int i = 0; i < 5; i++){
        cout << nums[i] << "  ";
    }

    return 0;
}