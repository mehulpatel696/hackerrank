#include <iostream>
#include <vector>

using namespace std; 
void partition(vector<int>& vec, int start, int end){


}
void quicksort(vector<int>& vec, int left, int right){
  if(left > right) return;
  int p = partitio(vec, left, right);
  quicksort(vec, left, p - 1);
  quicksort(vec, p + 1, right);
}


int main(){
   vector<int> sample;
   sample.push_back(2123);
   sample.push_back(2111);
   sample.push_back(1232);
   sample.push_back(2);
   sample.push_back(12);
   sample.push_back(21);
   sample.push_back(12);

   quicksort(sample, 0, sample.size());
   for(int i = 0; i < sample.size(); i++)  cout<<sample[i]<<endl;
   return 0;
}
