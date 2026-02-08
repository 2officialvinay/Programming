#include<iostream>
using namespace std;

void print(int a){
    // Base Case...
    if(a == 0){
        return;
    }

    // Recursive Relation...
    print(a/10);

    cout << a%10 << "    ";
}

int main(){
    int a;
    cout << "Enter the number: ";
    cin >> a;
    if(a == 0){
        cout << a << endl;
    }

    print(a);

    return 0;
}