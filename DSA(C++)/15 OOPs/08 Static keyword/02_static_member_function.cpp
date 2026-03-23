#include<bits/stdc++.h>
using namespace std;

class object{
    public:
    int x, y;

    object() : x(1), y(2) {}

    static void print() {
        cout << "This is static print function." << endl;
    }
};

int main(){
    object obj1;
    object obj2;
    obj1.print();
    obj2.print();
    object::print(); 

    return 0;
}