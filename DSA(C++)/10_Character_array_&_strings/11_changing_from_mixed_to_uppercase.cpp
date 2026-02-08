#include<iostream>
#include<string.h>
using namespace std;

void getUppercase(char ch[]){
    int n = strlen(ch);
    
    for(int i = 0; i < n; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            ch[i] = ch[i] - 'a' +'A';
        }
    }
}

int main(){
    char ch[100];
    cout << "Enter the word: ";
    cin >> ch;

    getUppercase(ch);  // Array is pass by reference so any changes will be in original...

    cout << "The result is " << ch << endl;

    return 0;
}