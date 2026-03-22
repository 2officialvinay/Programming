#include<bits/stdc++.h>
using namespace std;

class object{
    public:
    int x;
    int *y;

    // Initialisation list...
    object(int a, int b) : x(a), y(new int(b)) {}

    // Deeep copy constructor...
    object(const object &obj){
        x = obj.x;
        y = new int(*obj.y);
    }

    void print() const
    {
        printf("x : %d\nAddress in y : %p\nData in y : %d\n", x, y, *y);
    }

    ~object(){
        delete y;
    }
};

int main(){
    object *a = new object(1,2);
    object b = *a;
    delete a;
    b.print();

    return 0;
}