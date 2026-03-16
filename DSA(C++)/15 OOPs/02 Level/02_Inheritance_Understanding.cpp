#include<bits/stdc++.h>
using namespace std;

class Animal{  // Parent Class..
    public:
    int age;
    int weight;

    void eat(){
        cout << "Eating." << endl;
    }
};

class Dog: public Animal{
    // Inheritance...
};

int main(){
    Dog Tommy;
    Tommy.eat();
    Tommy.age = 25;
    cout << Tommy.age << endl;

    return 0;
}