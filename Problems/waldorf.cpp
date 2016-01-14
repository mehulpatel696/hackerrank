#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 




bool findWaldorfOne(char matrix[8][11], int row, int column, string word, int i, int j){
   
   int size = word.size() - 1; 
   
   //Check Right 
   if( column - i >= size ){
     int c = 0; 
     bool found = true; 
     for(int k = i; k <= size; k++){
       if(word[c] != matrix[j][k]){
         found = false;
	 break;
       }
       c++;
     }
     if(found) return found;
   }
   
   //Check Left 
   if( i >= size ){
     int c = 0; 
     bool found = true; 
     for(int k = i; k >= 0; k--){
       if(word[c] != matrix[j][k]){
         found = false; 
	 break;
       }
     }
     if(found) return true;
   }

   //Check South East 
   if( row - j >= size && column - i >= size){
     bool found = true; 
     for(int k = 0; k <= size; k++){
       if(word[k] != matrix[j+k][i+k]){
         found = false; 
	 break;
       }
     }
     if(found) return true; 
   }


   return false;

}

void findWaldorf(char matrix[8][11], int row, int column, string word){
   for(int i = 0; i < row; i++){
     for(int j = 0; j < column; j++){
       if(findWaldorfOne(matrix, row, column, word, j, i)){
         cout<<i<<" "<<j<<endl;
	 return;
       }
     }
   }
}

int main(){
  
  int test; 
  cin>>test; 

  while(test){
    int row; 
    int column; 
    int num_words;
    vector<string> words; 
    cin>>row>>column;
    char matrix[row][column];
    for(int i = 0; i < row; i++) for(int j = 0; j < column; j++) cin>>matrix[i][j];
    cin>>num_words; 
    while(num_words){
     string temp; 
     cin>>temp; 
     words.push_back(temp); 
     num_words--;
    }
    for(int i = 0; i < words.size(); i++) findWaldorf(matrix, row, column, words[i]);
    test--;
  }

}
