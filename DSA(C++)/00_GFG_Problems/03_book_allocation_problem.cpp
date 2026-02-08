/*
Given an array A[], where A[i] represents the number of pages in the i-th book,
and an integer M denoting the total number of students,
allocate all books to the students such that:

# Each student gets at least one book.
# Books are allocated in a contiguous sequence.
# The maximum number of pages assigned to any student is minimized.

If it is not possible to allocate all books among M students under these conditions, return -1.
*/

#include<iostream>
#include <numeric>  // To use accumulate...
using namespace std;

// Function to check the solution is possible or not...
bool isPossibleSolution(int A[], int N, int M, int solu){
    int pageSum = 0;
    int count = 1;   // Count for Student...

    for(int i = 0; i < N; i++){
        if(A[i] > solu){
            return false;
        }
        if(pageSum + A[i] > solu){
            count++;
            pageSum = A[i];
            if(count > M){
                return false;
            }
        }
        else{
            pageSum += A[i];    // pageSum = pageSum + A[i];
        }
    }
    return true;
}

// Function to find minimum number of pages...
int findpage(int A[], int N, int M){
    if(M>N){
        return -1;
    }
    
    int start = 0;
    int end = accumulate(A, A+N, 0);
    int ans = -1;

    while(start <=end){
        int mid = start + (end-start)/2;
        if(isPossibleSolution(A, N, M, mid)){
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
    int A[] = {12,34,67,90};  // A[i] repesent the no. of pages in a book
    int N = 4;  // No. of Books
    int M = 2;  // No. of Students

    int min_page = findpage(A, N, M);

    cout << "The atmost pages alloted to a student is: " << min_page << endl;

    return 0;
}