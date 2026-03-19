// Example of operator overloading in polymorphism...

#include<bits/stdc++.h>
using namespace std;

class parameter{
    public:
    int value;

    void operator+(parameter& obj2){
        int value1 = this->value;
        int value2 = obj2.value;
        cout << (value2-value1) << endl;
    }
};

int main(){
    parameter object1, object2;
    object1.value = 7;
    object2.value = 10;

    object1 + object2;

    return 0;
}