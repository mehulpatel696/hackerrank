#include <iostream> 
#include <vector> 
#include <string>

using namespace std;


string findI(vector<int> array){
  //Starting the Second Index 
  if(array.size() < 3) return "NO";
  //1. set i + 1 to mid 
  //add everything before i + 1
  //add everything after i + 1 
  //compare the two 
  //move mon
  for(int i = 0; i < (array.size() - 1); i++){
    mid = i + 1; 
    //Add before i 
    int sum_left = 0; 
    int sum_right = 0; 

    for(int j = 0; j < i + 1;j++){
      sum_left += array[j];
    }

    for(int j = i + 2; j < array.size();j++){
      sum_right += array[j];
    }

    if(sum_left == sum_right) return "YES";
  }
  
  return "NO";
  	
}


int main(){
 //1. Take in the number of test cases
 //2. Loop and take in the size of the array  
 //3. Take in the number of elements in the array 
 
 int testcases; 
 cin>>testcases; 
 cout<<endl;
 vector<int> array;
 for(int i = 0; i < testcases; i++){
   int array_size; 
   cin>>array_size; 
   for(int j = 0; j < array_size; j++){
     int temp; 
     cin>temp; 
     array.push(temp);
   }
   cout<<endl;
 }
 cout<<findI(array);

}

