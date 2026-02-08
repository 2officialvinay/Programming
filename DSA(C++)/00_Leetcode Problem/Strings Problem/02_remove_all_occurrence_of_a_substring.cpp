#include<iostream>
#include<string>
using namespace std;

string removeOccurrence(string str, string part){
     int pos = str.find(part);

     while(pos != string::npos){
        str.erase(pos, part.length());
        pos = str.find(part);
     }
     return str;
}

int main(){
    string str;
    string part;
    
    cout << "Enter string: ";
    cin >> str;

    cout << "Enter part: ";
    cin >> part;

    string result =  removeOccurrence(str, part);

    cout << "The final string is: " << result << endl;

    return 0;
}