#include<iostream>
#include<string>
using namespace std;

bool compare(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    int j = 0;
    for(int i = 0; i < a.length(); i++){
        if(a[i] != b[j]){
            return false;
        }
        j++;
    }
    return true;
}

int main(){
    string a = "LOVE";
    string b = "LOVE";

    int ans = compare(a, b);

    if(ans == 0){
        cout << "Both strings are different." << endl;
    }
    else{
        cout << "Both strings are same." << endl;
    }

    return 0;
}