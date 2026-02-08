#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,0,1,0,1,0,0,0,1,1,1,1,0,1,0,1,0,1};
    int size = 18;
    
    int zerocount = 0;
    int onecount = 0;
    
    for(int i = 0; i < size; i++){
        if( arr[i] == 0){
        zerocount++;
        }
    }
    
    for(int i = 0; i < size; i++){
        if( arr[i] == 1){
        onecount++;
        }
    }
    
    cout << "0's count are " << zerocount << " and " << "1's count are " << onecount << endl;
    
    return 0;
}