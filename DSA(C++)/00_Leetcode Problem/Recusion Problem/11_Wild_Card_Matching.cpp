#include<iostream>
using namespace std;

bool isMatchingHelper(string &s, string &p, int iofs, int iofp){
    // Base Case...
    if(iofs == s.length() && iofp == p.length()){
        return true;
    }

    if(iofs == s.length() && iofp < p. length()){
        while(iofp < p.length()){
            if(p[iofp++] != '*') return false;
        }
        return true;
    }

    // Progression and Recursive Relation...
    if(s[iofs] == p[iofp] || '?' == p[iofp]){
        return isMatchingHelper(s, p, iofs+1, iofp+1);
    }

    if(p[iofp] == '*'){
        bool Case1 = isMatchingHelper(s, p, iofs, iofp+1);
        bool Case2 = isMatchingHelper(s, p, iofs+1, iofp);
        return Case1 || Case2;
    }
    return false;
}

bool isMatching(string s, string p){
    int iofs = 0; // Pointer index for string s...
    int iofp = 0; // Pointer index for pattern string p...

    return isMatchingHelper(s, p, iofs, iofp);
}

int main(){
    string s, p;
    cout << "Enter source & pointer string respectively:" << endl;
    cin >> s >> p;

    bool ans = isMatching(s, p);

    if(ans){
        cout << "Strings are same." << endl;
    }
    else{
        cout << "Strings are not same." << endl;
    }

    return 0;
}