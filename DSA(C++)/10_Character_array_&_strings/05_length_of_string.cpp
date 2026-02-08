#include<iostream>
#include<string.h>
using namespace std;

int stringLength(char name[]){
    int length = 0;
    int i = 0;

    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){
    char name[100];
    cout << "Enter the string: ";
    cin >> name;

    int result = stringLength(name);

    cout << "The string length is: " << result << endl;

    // OR we can use predefined function 'strlen'...
    cout << "The string length is: " << strlen(name) << endl;
    return 0;
}