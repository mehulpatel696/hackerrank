#include <iostream> 
#include <vector> 

using namespace std; 


int magicIndex(vector<int> a, int start, int end){
 if(start > end) return -1; 
 int mid = (start + end)/2; 
 if(a[mid] == mid) return mid;
 //else if (int i = magicIndex(a, 0, mid - 1)  != -1) return i; 
 //else if (int j = magicIndex(a, mid + 1, end) != -1) return j;
 //return -1;
 else if(a[mid] < mid) return magicIndex(a, mid + 1, end); 
 else return magicIndex(a, start, mid - 1); 
}

int main(){
 
   vector<int> a;

   a.push_back(1);
  
   a.push_back(2);
   a.push_back(100);
   a.push_back(102);
   a.push_back(123);

   cout<<magicIndex(a, 0, a.size() - 1);
}
