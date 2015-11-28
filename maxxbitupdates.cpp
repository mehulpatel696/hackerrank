#include <iostream> 
#include <bitset>
using namespace std;

int numBits(int a, int b){
 int sum = 0;
 bitset<16> aBits(a);
 bitset<16> bBits(b); 
 for(int i = 0; i < 16; i++){
   if(aBits[i] != bBits[i]) sum++;
 }
 return sum;
}

int main(){
 cout<< (8>>2) <<endl;;
 cout<<numBits(5,8)<<endl;
 return 0;
}
