#include<bits/stdc++.h>
using namespace std;

class Animal {
    private:   // Full Encapsulation...
            int age;
            int weight;
    
    public:
            // For age...
            int getAge(){
                return this->age;
            }
            int setAge(int age){
                this->age = age;
            }

            // For weight...
            int getWeight(){
                return this->weight;
            }
            int setWeight(int weight){
                this->weight = weight;
            }
};

int main(){
    Animal dog;
    dog.setAge(10);
    cout << "Age of dog is: " << dog.getAge() << endl;

    dog.setWeight(30);
    cout << "Weight of dog is: " << dog.getWeight() << endl;

    return 0;
}