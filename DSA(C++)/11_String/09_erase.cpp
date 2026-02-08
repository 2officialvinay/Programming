#include <iostream>
#include <string>
using namespace std;

void EraseSubstring(string &s, int pos, int len) {
    int n = s.length();

    for(int i = pos; i + len < n; i++) {
        s[i] = s[i + len];
    }

    s.resize(n - len);
}

int main() {
    string s = "HelloWorld";
    EraseSubstring(s, 5, 5);

    cout << s << endl;  // Hello
}