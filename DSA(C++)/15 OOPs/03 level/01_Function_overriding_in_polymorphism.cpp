#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout << "Animal is speaking" << endl;
    }
};

class Dog: public Animal{
    public:
    // Overriding...
    void speak(){
        cout << "Dog is barking." << endl;
    }
};

int main(){
    Animal A;
    A.speak();

    Dog D;
    D.speak();

    return 0;
}