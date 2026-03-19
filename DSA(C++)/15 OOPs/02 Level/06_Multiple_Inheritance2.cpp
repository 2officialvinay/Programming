// Example of multiple Inheritance when same elements are mentioned in different classes...

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int Mathematics;
    A(){  // Constructor..
        Mathematics = 90;
    }
};

class B{
    public:
    int Mathematics;
    B(){  // Constructor..
        Mathematics = 80;
    }
};

class C: public A, public B{
    public:
    int Chemistry;
    C(){  // Constructor..
        Chemistry = 85;
    }
};

int main(){
    C marks;
    cout << marks.A::Mathematics << " " << marks.B::Mathematics << " " << marks.Chemistry << endl; // :: -> ( scope resolution operator)

    return 0;
}