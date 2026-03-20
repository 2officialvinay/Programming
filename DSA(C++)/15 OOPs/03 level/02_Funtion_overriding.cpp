#include<bits/stdc++.h>
using namespace std;

class ShapeArea{
    public:
    void area(){
        cout << "General formula for area is side*side." << endl;
    }
};

class Triangle: public ShapeArea{
    public:
    // Function Overriding...
    void area(){
        cout << "Area of right angle triangle is (1/2)*base*height." << endl;
    }
};

class Rectangle: public ShapeArea{
    public:
    // Function Overriding...
    void area(){
        cout << "Area of rectangle is lenght*breadth." << endl;
    }
};

class Circle: public ShapeArea{
    public:
    // Function Overriding...
    void area(){
        cout << "Area of circle is 3.14*radius*radius." << endl;
    }
};


int main(){
    Circle C;
    C.area();

    return 0;
}