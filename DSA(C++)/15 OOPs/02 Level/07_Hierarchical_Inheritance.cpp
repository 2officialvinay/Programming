// Example of hierarchical inheritance...

#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string modal;

    void speed(){
        cout << "Speed is good." << endl;
    }
};

class Scorpio: public Car{

};

class Fortuner: public Car{

};

int main(){
    Scorpio S;
    S.speed();

    Fortuner F;
    F.speed();

    return 0;
}