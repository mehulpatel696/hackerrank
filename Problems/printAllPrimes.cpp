#include <iostream> 
#include <string> 

using namespace std; 

bool isPrime(int n){
 for(int i = 2; i <= n/2; i++)  if(n%i == 0) return false; 
 return true; 

}

void printAllPrimes(int n){
  for(int i = 1; i <= n; i++) if(isPrime(i)) cout<<i<<" ";
}

int main(){
 printAllPrimes(100);
 return 0;
}
