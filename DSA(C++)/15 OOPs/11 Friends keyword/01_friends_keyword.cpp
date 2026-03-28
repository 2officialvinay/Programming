#include<bits/stdc++.h>
using namespace std;

class A{
private:
    int x;

public:
    A(int val){
        x = val;
    }

    friend class B; // B can access private members
};

class B{
public:
    void show(const A &a){
        cout << a.x << endl; // access private member of A
    }
};

int main(){
    A a(5);

    B b;
    b.show(a);

    return 0;
}