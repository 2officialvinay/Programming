#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    int i = 0;

    // arr[i] = i[arr] and they both resolves as *(arr + i) & *(i + arr) respectively...
    cout << arr[i] << endl;
    cout << i[arr] << endl;
    cout << *(arr + i) << endl;
    cout << *(i + arr) << endl;

    return 0;
}