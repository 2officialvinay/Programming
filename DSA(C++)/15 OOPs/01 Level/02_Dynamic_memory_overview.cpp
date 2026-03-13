#include<bits/stdc++.h>
using namespace std;

class Animal{
    // State or Properties...
    private:
    int weight;

    public:
    int age;
    string name;

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

    // Dynamic Memory...
    Animal* Suresh = new Animal;
    
    (*Suresh).age = 7;
    (*Suresh).name = "Cat";
    cout << (*Suresh).age << endl;
    cout << (*Suresh).name << endl;
    cout << endl;

    // Alternate way
    Suresh->age = 8;
    Suresh->name = "Dog";
    cout << (*Suresh).age << endl;
    cout << (*Suresh).name << endl;
    cout << endl;

    Suresh->eat();
    Suresh->sleep();

    return 0;
}