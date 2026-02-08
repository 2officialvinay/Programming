// It will show the ASCII value of null character(\0) that is zero...

#include<iostream>
using namespace std;

int main(){
    char name[10];

    cout << "Enter: ";
    cin >> name;

    cout << "Output:  " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Index: " << i << " Character: " << name[i] << endl;
    }

    cout << "The value of null character is: " << (int)name[5];
    
    return 0;
}