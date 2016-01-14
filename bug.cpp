#include <iostream> 
#include <vector> 
#include <string>


void printMatrix(int array[8][11]){
  for(int i = 0; i < 8; i++){
      for(int j = 0; j < 11; j++) {
          cout<<array[i][j];
       }
      cout<<endl;
  }
}

int main(){
  string welcome = "Hello, please enter the 8*11 2d array that you would like printed"; 
  cout<<string; 
  int array[8][11];
  for(int i = 0; i < 8; i++) for(int j = 0; j < 11; j++) cin>>array[i][j];
  printMatrix(array);
  return 0;
}
