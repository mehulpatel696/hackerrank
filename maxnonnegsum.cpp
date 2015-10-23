#include <iostream>
#include <vector>
using namespace std;

int maxSlice(vector<int>& A){
    int currentSum = 0;
    int maxSum = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] >= 0) {
            currentSum += A[i];
            if(maxSum < currentSum) maxSum = currentSum;
        }
        else currentSum = 0;
    }
    if(maxSum == 0) return -1;
    return maxSum;
}

int main(){
    //Tester Code
    vector<int> A;
    A.push_back(-1);
    A.push_back(-1);
    A.push_back(-1);
    A.push_back(-1);
    A.push_back(-1);
    A.push_back(-1);
    A.push_back(-1);
    
    
    
    cout<<maxSlice(A)<<endl;
}
