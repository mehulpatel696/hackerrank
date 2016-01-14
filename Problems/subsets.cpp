#include <iostream> 
#include <vector> 
#include <string>

using namespace std; 

void printArray(vector< vector<int> > a){
 for(int i = 0; i < a.size(); i++){
  for(int j = 0; j < a[i].size(); j++){
   cout<<a[i][j]<<" ";
  }
  cout<<endl;
 }
}

void printArrayOne(vector<int> a) {
 for(int i = 0; i < a.size(); i++) cout<<a[i]<<" ";
 cout<<endl;
}

void allSubsets1(vector<int> a, int start, int end, vector< vector<int> >& subsets){
  if(end < start) return; 
  int size = subsets.size();
  for(int i = 0; i < size; i++){
     vector<int> temp = subsets[i]; 
     temp.push_back(a[start]);
     subsets.push_back(temp);
  }
  vector<int> temp;
  temp.push_back(a[start]);
  subsets.push_back(temp);
  allSubsets1(a, start + 1, end, subsets);
}

int main(){
 vector<int> a; 

 a.push_back(1);
 a.push_back(2);
 a.push_back(3);
 a.push_back(4);
 vector< vector<int> > subsets; 
 allSubsets1(a, 0, a.size() - 1,subsets);
 printArray(subsets);
}
