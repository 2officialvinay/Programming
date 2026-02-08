#include <iostream>
#include <limits.h>
using namespace std;

int maxElement(int arr[], int n, int i, int comparator)
{
    // Base Case...
    if (i >= n)
    {
        return comparator;
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
    int n = 5;
    int i = 0;
    int comparator = INT_MIN;

    int ans = maxElement(arr, n, i, comparator);

    cout << "The maximum element in the array is: " << ans << endl;

    return 0;
}