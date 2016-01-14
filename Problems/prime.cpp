#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


//Check if entered number is prime

bool isPrime(int n){
    bool prime = true;
    for(int i = 2; i <= n/2; i++){
        if( n%i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}


//Print all Prime numbers in a range

void printPimesInRange(int x, int y){
    if(x <= 1) x = 2;
    for(int i = x; i <= y; i++) if(isPrime(i)) cout<<i<<" ";
}

int main(){
    printPimesInRange(0,10);
    return 0;
    
}

