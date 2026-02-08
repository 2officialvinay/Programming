/*
QUESTION : Student's marks & grade problem.
*/
#include<iostream>
using namespace std;

char grade(int n){
     if(n>=90){
         return 'A';
     }
     else if(n>=80){
         return 'B';
     }
     else if(n>=70){
         return 'C';
     }
     else if(n>=60){
         return 'D';
     }
     else{
         return 'E';
     }
}
    
int main(){
    int n;
    cout << "Enter your marks : ";
    cin >> n;
    char finalgrade = grade(n);  // Function call.
    cout << "Your grade is " << finalgrade << endl;
    return 0;
}