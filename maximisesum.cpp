#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Hacker Rank Maximum Mod Sum Problem 

int findMaxSum(vector<int> numbers, int  M){ 
    
    int maxModSum = 0; 
    int currentSum = 0; 
    for(int i = 0; i < numbers.size(); i++){
      for(int j = i; j < numbers.size(); j++){
        currentSum += numbers[j];
        if(maxModSum < (currentSum%M)) maxModSum = (currentSum%M);
      }
      currentSum = 0;
    }
    return maxModSum; 
    
}

int main(){
    int numTestCases; 
    cin>> numTestCases;
    for( int j = 0; j < numTestCases; j++){
        int N;
        int M; 
        cin>> N >> M;
        vector<int> numbers; 
        for(int i = 0; i < N; i++){
            int tmp; 
            cin>>tmp;
            numbers.push_back(tmp);
        }
        cout<<findMaxSum(numbers, M);
    }

	return 0;
}
