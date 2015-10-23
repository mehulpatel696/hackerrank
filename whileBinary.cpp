#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A, int X){
  int N = A.size();
  if(N == 0) return -1;
  
  int l = 0;
  int r = N - 1;

  while(l < r){
    
    int m = (l+r)/2;
    if(A[m] > X) {
      
        r = m - 1;
    }
    else{
        l = m + 1;
    }
  }
  if(A[l] == X) return -1  ;
  return l - 1;
}

int main(){
    vector<int> A; 
    
    A.push_back(1);
    A.push_back(2);
    A.push_back(5);
    A.push_back(9);
    A.push_back(9);
    
    cout<<solution(A, 1)<<endl;
    cout<<solution(A, 2)<<endl;
    cout<<solution(A, 5)<<endl;
    cout<<solution(A, 9)<<endl;
  

}