// Example of multiple Inheritance...

#include<bits/stdc++.h>
using namespace std;

class Subject1{
    public:
    int Mathematics;
};

class Subject2{
    public:
    int Physics;
};

class Subject3: public Subject1, public Subject2{
    public:
    int Chemistry;
};

int main(){
    Subject3 marks;
    marks.Mathematics = 90;
    marks.Physics = 80;
    marks.Chemistry = 85;
    cout << marks.Mathematics << " " << marks.Physics << " " << marks.Chemistry << endl;

    return 0;
}