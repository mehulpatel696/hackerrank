#include <iostream> 
#include <string> 

using namespace std; 

void rs(char *a){
  if(a[0] == '\0') return;
  rs(a + 1);
  cout<<a[0];
}

int main(){
  char a[]  = "mehul";
  rs(a);
  return 0;
}
