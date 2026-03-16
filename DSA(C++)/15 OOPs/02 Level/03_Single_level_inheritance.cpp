// Example of single inheritance...

#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string name;
    string modal;

    void speed(){
        cout << "Speed is good." << endl;
    }

    void mileage(){
        cout << "Mileage is good." << endl;
    }
};

class Scorpio: public Car{

};

int main(){
    Scorpio s;
    s.speed();
    s.mileage();

    return 0;
}