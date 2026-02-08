#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number:" << endl;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;   
        while(j<=n){
            cout << n-j+1; // Instead of j, I use j=n-j+1 to reverse the pattern.
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}