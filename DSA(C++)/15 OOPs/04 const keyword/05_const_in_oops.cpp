#include<bits/stdc++.h>
using namespace std;

class object{
    int x;
    int *y;
    int z;

    public:
        object(int a, int b, int c){
            x = a;
            y = new int(b);
            z = c;
        }

        int getX() const
        {
            return x;
        }

        void setX(int value){
            x = value;
        }

        int getY() const
        {
            return *y;
        }

        void setY(int value){
            *y = value;
        }

        int getZ() const
        {
            return z;
        }

        void setZ(int value){
            z = value;
        }

};

void printObject(const object &obj){
    cout << "The values of x, y, z are ";
    cout << obj.getX() << " " << obj.getY() << " " << obj.getZ();
    cout << " respectively." << endl; 
}

int main(){
    object obj(1, 2, 3);
    printObject(obj);

    return 0;
}