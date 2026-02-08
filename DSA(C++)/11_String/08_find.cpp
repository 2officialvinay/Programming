#include<iostream>
#include<string>
using namespace std;

int find(string s, string target){
    int n = s.length();
    int m = target.length();

    if(m == 0){
        return 0;
    }

    for(int i = 0; i < n-m; i++){
        int j = 0;
        while(j < m && s[i+j] == target[j]){
            j++;
        }

        if(j == m){
            return i;
        }
    }
    return -1;
}    

int main(){
    string s = "This is the string.";
    string target;
    cout << "Enter your Input: ";
    cin >> target;

    int result = find(s, target);

    if(result == -1){
        cout << "Not found." << endl;
    }
    else if(result == 0 && target.length() == 0){
        cout << "Input Missing" << endl;
    }
    else{
        cout << "The starting index of target is: " << result << endl;
    }

    return 0;
}