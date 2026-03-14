#include<bits/stdc++.h>
using namespace std;

class Animal{
    // State or Properties...
    private:
    int weight;

    public:
    int age;
    string name;

    // Constructor...
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->name = "";
    }

    // Behaviour...
    void eat(){
        cout << "Tiger is eating." << endl;
    }
    void sleep(){
        cout << "Tiger is sleeping." << endl;
    }

    int getweight(){
        return weight;
    }

    void setweight(int w){
        weight = w;
    }

    ~Animal() {
        cout << "Destructor" << endl;
    }
};

int main(){

    // Static...
    cout << " Animal a object creation." << endl;
    Animal a;
    a.age = 5;

    // Dynamic...
    cout << " Animal b object creation." << endl;
    Animal* b = new Animal;
    b->age = 10;
    
    delete b; // Manually destruction..
    
    return 0;
}