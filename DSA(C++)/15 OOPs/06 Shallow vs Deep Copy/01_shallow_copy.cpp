#include<bits/stdc++.h>
using namespace std;

class object{
    public:
    int x;
    int *y;

    // Initialisation list...
    object(int a, int b) : x(a), y(new int(b)) {}

    // Default copy constructor...(Shallow copy)
    // object(const object &obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    void print() const
    {
        printf("x : %d\nAddress in y : %p\nData in y : %d\n", x, y, *y);
    }
};

int main(){
    object a(1,2);
    cout << "Printing a:" << endl;
    a.print();
    
    // object b(a);
    object b = a; // It will call default copy constructor...
    cout << "\nPrinting b:" << endl;
    b.print();

    *b.y = 20;
    cout << "\nPrinting b:" << endl;
    b.print();

    cout << "\nPrinting a:" << endl;
    a.print();

    return 0;
}