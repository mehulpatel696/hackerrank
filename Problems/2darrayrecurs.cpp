#include <iostream>
#include <vector> 

using namespace std;

//   1 1
//   1 1a
int matrixDownAndRight(vector< vector<int> > vec, int i , int j){
    
    if( i > vec.size() - 1 || j > vec[0].size() - 1) return 1;
    return matrixDownAndRight(vec, i , j + 1) + matrixDownAndRight(vec, i + 1, j);

}




int main(){
    vector< vector<int> > p;
    
    vector<int> A;
    vector<int> A1;
    
    A.push_back(1);
    A.push_back(1);
    
    A1.push_back(1);
    A1.push_back(1);
    
    p.push_back(A);
    p.push_back(A1);
    cout<<matrixDownAndRight(p,0,0);
    return 0;
    
    //quicksort(A, 0, A.size() - 1);
    
    
}
