/*Given three arrays sorted in increasing order. Find the elements that are common in all three
arrays.*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a{1, 5, 10, 20, 40, 80};
    vector<int>b{6, 7, 20, 80, 100};
    vector<int>c{3, 4, 15, 20, 30, 70, 80, 120};
    vector<int>ans;
    int n1 = a.size();
    int n2 = b.size();
    int n3 = c.size();
    int i,j,k;
    i=j=k=0;

    while(i < n1 && j < n2 && k < n3){
        if(a[i]==b[j] && b[j]==c[k]){
            ans.push_back(a[i]);
            i++, j++, k++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < c[k]){
            j++;
        }
        else{
            k++;
        }
    }
    cout << "The common element in arrays are: ";
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}