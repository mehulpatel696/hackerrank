#include <iostream>
#include <vector>

using namespace std; 

void quicksort(vector<int>& vec, int left, int right){
   if(left > right) return;
   int pivot = (right+left)/2; 
   cout<<"Running Quick Sort"<<endl;
   swap(vec[pivot], vec[right]);
   int i = 0,j = right -1;
   while(true){
      while(vec[i] < vec[pivot]) i++;
      while (j > i &&vec[j] > vec[pivot]) j--;
      cout<<"Swapping I and Pivot"<<endl;
      if(j >  i) swap(vec[i++],vec[j--]);
      else break;
   }
   swap(vec[i], vec[right]);
   quicksort(vec, left, pivot - 1);
   quicksort(vec, pivot + 1, right);
   
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
   for(int i = 0; i < sample.size(); i++){
     cout<<sample[i]<<endl;
   }
   return 0;
}
