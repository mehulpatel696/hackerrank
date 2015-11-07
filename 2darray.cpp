#include <iostream>
#include <string>


using namespace std;

void printArray(int info[6][6]){
    cout<<"---------------"<<endl;
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) { 
            cout<<info[i][j]<<" ";
        }
        cout<<endl;
    }
}

int findMaxSum(int info[6][6]){
    
    int maxSum = -100;
    
    for(int i = 0; i < 4; i++){
       for(int j = 0; j < 4; j++){
           int currentSum = 0;
           //Add first row 
           for(int k = j; k < j + 3; k++) currentSum += info[i][k];
           //Add Middle Row
           currentSum += info[i+1][j+1];
           //Add Last Row
           for(int l = j; l < j + 3; l++) currentSum += info[i+2][l];
           if(currentSum > maxSum) maxSum = currentSum;
        }
    }
    return maxSum;
    
}

int main(){
    int info[6][6];
    
    int val;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin>>val;
            info[i][j] = val;
        }
    }
    cout<<findMaxSum(info);
    return 0;
    
}
