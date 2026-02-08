/*
QUESTION : Print ntural numbers upto n.
*/

#include<iostream>
using namespace std;

void natural(int n){
    for(int i = 1; i<=n; i++){
       cout << i << endl;
    }
}
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    natural(n);  // Function call.
    return 0;
}