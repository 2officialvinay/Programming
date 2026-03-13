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
    
    // Parameterised Constructor...
    Animal(int age){
        this->age = age;
        cout << "P1 is executed." << endl;
    }

    Animal(int age, int weight){
        this->age = age;
        this->weight = weight;
        cout << "P2 is executed." << endl;
    }

    Animal(int age, int weight, string name){
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "P3 is executed." << endl;
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
};

int main(){

    // Static...
    Animal a(10);
    Animal c(10,20);

    // Dynamic...
    Animal* b = new Animal(10, 30, "Tiger");
    
    return 0;
}