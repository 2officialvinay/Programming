#include<iostream>
#include<string>
using namespace std;

int main(){
    string a = "LOVE";
    string b = "LOVE";

    cout << "CASE I" << endl;

    if(a.compare(b) == 0){
        cout << "Both strings are same." << endl;   //if compare = 0, then character are same...
    }
    else{
        cout << "Both strings are different." << endl;
    }

    cout << "CASE II" << endl;
    // if compare > or < 0, then character are different...
    string x = "a";
    string y = "b";

    cout << x.compare(y) << endl;  // if Ist char > 2nd char, then 1 returns AND if Ist char < 2nd char, then -1 returns...

    return 0;
}