// Parata Spoj Problem...

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int>cooksRank, int nP, int mid){
    int parataCount = 0;

    for(int i = 0; i < cooksRank.size(); i++){
        int R = cooksRank[i], j = 1;
        int timetaken = 0;

        while(true){
            if(timetaken + j*R <= mid){
                parataCount++;
                timetaken += j*R;
                j++; 
            }
            else{
                break;
            }
        }
        if(parataCount >= nP){
            return true;
        }
    }
    return false;
}

int find_minimum_time(vector<int>cooksRank, int nP){
    int start = 0;
    int highest_rank = *max_element(cooksRank.begin(), cooksRank.end());
    int end = highest_rank*(nP*(nP+1)/2);
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        
        if(isPossibleSolution(cooksRank, nP,  mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int nP;  // No. of Parata
    cout << "Enter the no. of parata: ";
    cin >> nP;
    int nC;  // No. of Cooks
    cout << "Enter the no. of cooks: ";
    cin >> nC;
    cout << "Enter the cook's rank: " << endl;
    vector<int>cooksRank;
    while(nC--){
        int R;
        cin >> R;
        cooksRank.push_back(R);
    }

    int ans = find_minimum_time(cooksRank, nP);
    cout << "The min. time required to make paratas is: " << ans << endl;

    return 0;
}