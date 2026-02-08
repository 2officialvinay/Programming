#include<bits/stdc++.h>
using namespace std;

void removeOccurrences(string &s, string &part){

    int found = s.find(part);

    if(found != string::npos){
        string left_part = s.substr(0, found);
        string right_part = s.substr(found+part.size(), s.size());
        s = left_part + right_part;

        removeOccurrences(s, part);
    }

    else{
        return;
    }
}



int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    removeOccurrences(s, part);

    cout << "The remaining string is: " << s << endl;

    return 0;
}