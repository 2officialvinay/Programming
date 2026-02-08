#include<iostream>
using namespace std;

int main(){
    char ch[10];
    int n;
    cout << "Enter the no. of characters: ";
    cin >> n;

    cout << "Enter the characters of name: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }

    cout << "The name is ";
    for (int i = 0; i < n; i++)
    {
        cout << ch[i];
    }
    
    
    return 0;
}