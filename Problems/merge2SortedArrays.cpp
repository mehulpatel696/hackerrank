#include <iostream> 
#include <vector> 

using namespace std; 

void printArray(vector<int> a){
 for(int i = 0; i < a.size(); i++) cout<<a[i]<<" ";
 cout<<endl;
}

void merge(vector<int>& a, vector<int>& b){
 
 if(b.size() > a.size()) return;
 int min = ( a[0] <= b[0] ) ?  a[0] : b[0];
 int buffer_const = min - 1;
 int last_index = a.size()-1; 
 int j = a.size() -  b.size() - 1;
 int i;
 
 for( i = b.size() - 1; i >= 0 && j >= 0 ; i--){
   if(b[i] > a[j]) a[last_index] = b[i];
   else if(b[i] == a[j]){
     a[last_index] = a[j];
     a[j] = buffer_const;
     a[last_index - 1 ] = b[i];
     last_index--;
     j--;
   } else {
     a[last_index] = a[j];
     a[j] = buffer_const;
     j--; 
     i++;
   }
   last_index--;
 }

 if(i > 0)  for(int k = 0; k <= i; k++)  a[k] = b[k];

}

int main(){
 
 vector<int> a; 
 a.push_back(1); 
 a.push_back(3); 
 a.push_back(5); 
 a.push_back(7);
 a.push_back(9);
 
 a.push_back(-1); 
 a.push_back(-1); 
 a.push_back(-1); 
 a.push_back(-1); 
 a.push_back(-1); 
 //a.push_back(-1);

 vector<int> b;
 b.push_back(2); 
 b.push_back(4); 
 b.push_back(6); 
 b.push_back(8); 
 b.push_back(10); 
 //b.push_back(1); 

 printArray(a); 
 merge(a,b); 
 printArray(a); 

}
