// Example of multi-level Inheritance...

#include<bits/stdc++.h>
using namespace std;

class fruit{
    public:
    string name;
};

class mango: public fruit{
    public:
    int weight;
};

class alphanso: public mango{
    public:
    int sugarlevel;
};

int main(){
    alphanso f;
    f.name = "Mango";
    f.weight = 100;
    f.sugarlevel = 70;

    cout << f.name << ", Weight = " << f.weight << " gm, Sugar-level = " << f.sugarlevel << " %" << endl;

    return 0;
}