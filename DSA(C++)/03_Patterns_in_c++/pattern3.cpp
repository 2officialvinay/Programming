#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number:" ;
    cin>>n;
    int i = 1;
    int counting = 1;
    while(i<=n){
        int j = 1;   
        while(j<=n){
            cout << counting << " " ;
            counting = counting + 1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}