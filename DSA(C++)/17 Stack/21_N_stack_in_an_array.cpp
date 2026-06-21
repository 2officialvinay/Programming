#include <bits/stdc++.h>
using namespace std;

class Nstack
{
    int *arr, *top, *next;
    int n;        // no. of stacks
    int size;     // size of main array
    int freespot; // tells the space in main array

public:
    Nstack(int _n, int _size) : n(_n), size(_size)
    {
        freespot = 0;
        arr = new int[size];
        top = new int[n];
        next = new int[size];

        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        for (int i = 0; i < size; i++){
            next[i] = i+1;
        }
        next[size-1] = -1;
    }

    // Pushing element 'x' int mth stack...
    bool push(int x, int m){
        if(freespot == -1){
            return false;  // Stack is overflaw...
        }

        // Finding free index...
        int index = freespot;

        // Updating freespot...
        freespot = next[index];

        // Inserting element in main array...
        arr[index] = x;

        // Updating next of index...
        next[index] = top[m-1];

        // Updating top...
        top[m-1] = index;

        return true;
    }

    // Poping top element from mth stack...
    int pop(int m){
        if(top[m-1] == -1){
            return -1;     // Stack is underflow...
        }

        int index = top[m-1];
        top[m-1] = next[index];
        int poped_element = arr[index];
        next[index] = freespot;
        freespot = index;

        return poped_element;
    }
};

int main()
{
    Nstack s(3, 6);
    cout << s.push(10,1) << endl;
    cout << s.push(11,2) << endl;
    cout << s.push(12,1) << endl;
    cout << s.push(13,3) << endl;
    cout << s.push(14,1) << endl;
    cout << s.push(15,2) << endl;

    cout << s.pop(2);

    return 0;
}