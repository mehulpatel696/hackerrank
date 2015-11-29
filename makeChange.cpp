#include <iostream>

using namespace std; 

int makeChange(int n){
  if( n < 0 ) return 0; 
  if(n == 0) return 1; 
  return makeChange(n-25) + makeChange(n-10) + makeChange(n-5) + makeChange(n-1);
  // if(n >= 25) return makeChange(n-25) + makeChange(n-10) + makeChange(n-5) + makeChange(n-1); 
  //else if(n >= 10) return makeChange(n-10) + makeChange(n-5) + makeChange(n-1); 
  //else if(n >= 5) return  makeChange(n-5) + makeChange(n-1); 
  //else return makeChange(n-1);
}

int main(){
 cout<<makeChange(10)<<endl;
 return 0; 
}
