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

    // Static
    Animal ramesh;
    ramesh.age = 18;
    ramesh.name = "Tiger";
    cout << "Age of ramesh is: " << ramesh.age << endl;
    cout << "Name of ramesh is " << ramesh.name << endl;
    ramesh.eat();
    ramesh.sleep();
    ramesh.setweight(100);
    cout << "Weight of ramesh is: " << ramesh.getweight() << endl;

    return 0;
}