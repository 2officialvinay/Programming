#include <iostream>
#include <limits.h>
using namespace std;

void maxElement(int arr[], int n, int i, int &comparator)
{
    // Base Case...
    if (i >= n)
    {
        return;
    }

    // Recurrsive Relation...
    if (arr[i] > comparator)
    {
        comparator = arr[i];
    }

    maxElement(arr, n, i + 1, comparator);
}

int main()
{
    int arr[5] = {50, 20, 70, 90, 10};
    int comparator = INT_MIN;
    maxElement(arr, 5, 0, comparator);

    cout << "The maximum element in the array is: " << comparator << endl;

    return 0;
}