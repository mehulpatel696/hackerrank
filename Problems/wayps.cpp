#include <iostream> 

using namespace std; 

int way(int n){
 if(n == 0) return 1;
 else if (n < 0) return 0;
 return way(n-1) + way(n-2) + way(n-3);
}

int main(){
  cout<<way(3)<<endl;;
}
