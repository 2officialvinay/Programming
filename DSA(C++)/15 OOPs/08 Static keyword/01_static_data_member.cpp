#include<bits/stdc++.h>
using namespace std;

class object{
    public:
    static int x, y;

    void print() const {
        cout << x << " " << y << endl;
    }
};

int object::x;
int object::y;

int main(){
    object obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();

    object obj2;
    obj2.x = 3;
    obj2.y = 4;
    obj1.print();
    obj2.print();

    return 0;
}