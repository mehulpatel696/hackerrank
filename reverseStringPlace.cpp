#include <iostream> 
#include <string> 

using namespace std; 

void reverseString(string &s){
 int j = s.size() - 1; 
 for(int i = 0; i < s.size()/2; i++){
   char temp = s[j];
   s[j] = s[i]; 
   s[i] = temp;
   j--;
 }

}

int main(){
  string sample = "hello";
  reverseString(sample); 
  cout<<sample;
}
