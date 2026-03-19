// Example of function overloading in compile time polymorphism...

#include<bits/stdc++.h>
using namespace std;

class maths{
    public:
    int sum(int a, int b){
        return a+b;
    }

    int sum(int a, int b, int c){
        return a+b+c;
    }

    float sum(int a, float b){
        return a+b;
    }
};

int main(){
    maths m;

    cout << "Sum = " << m.sum(8,7.6f) << endl;

    return 0;
}