// It will find the index of Ist letter of Word...

#include<iostream>
#include<string>
using namespace std;

int main(){
    string sentence = "Hello Everyone! I am Vinay.";
    string target = "Vinay";

    if(sentence.find(target) == string::npos){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found at index " << sentence.find(target) << endl;
    }

    return 0;
}