#include <iostream> 
using namespace std;

int toBinary(int num){
 if(num == 0) return 0;
 return num%2 + toBinary(num/2);
}

int main(){
 cout<< toBinary(7);
  return 0;
}
