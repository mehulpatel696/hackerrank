#include <iostream> 
#include <vector> 

using namespace std;

unsigned long long fibonacci(int num){
   int prev_1 = 0; 
   int prev_2 = 1;
   int current = prev_1 + prev_2;;
   for(int i = 1  ; i <= num; i++){
	current = prev_1 + prev_2; 
        prev_1 = prev_2;
	prev_2 = current;
   }
   return current;
		
}

int main(){
  
  cout<<fibonacci(175)<<endl;
  return 0;
}
