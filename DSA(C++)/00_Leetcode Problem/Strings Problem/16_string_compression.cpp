#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int stringCompress(vector<char>&s){
    int index = 0, count = 1; 
    char prev = s[0];

    for(int i = 1; i < s.size(); i++){
        if(prev == s[i]){
            count++;
        }
        else{
            s[index++] = prev;
            if(count > 1){
                int start = index;
                while(count){
                    s[index++] = (count % 10) + '0';
                    count/=10;
                }
                reverse(s.begin()+start, s.begin()+index);
            }
            prev = s[i];
            count = 1;
        }
    }
    
    s[index++] = prev;
    if(count > 1){
        int start = index;
        while(count){
            s[index++] = (count % 10) + '0';
            count/=10;
        }
        reverse(s.begin()+start, s.begin()+index);
    }
    return index;
}

int main(){
    string input;
    vector<char>chars;
    cout << "Enter the characters: ";
    cin >> input;

    for(auto c : input){
        chars.push_back(c);
    }

    cout << "The compressed string length is: " << stringCompress(chars) << endl;

    return 0;
}