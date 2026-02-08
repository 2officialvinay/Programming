#include<iostream>
using namespace std;

void findmissing(int a[], int n){
    for(int i = 0; i < n; i++){
        int index = abs(a[i]);
        if(a[index-1] > 0){
            a[index-1] *= -1;
        }
    }

    cout << "The missing element from the array is: " ;
    for(int i = 0; i<n; i++){
        if(a[i]>0){
            cout << i+1 << " ";
        }
    }
}

int main(){
    int n;
    int a[] = {1,3,4,3,5};
    n = sizeof(a)/sizeof(int);
    findmissing(a, n);
    return 0;
}