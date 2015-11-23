#include <iostream>
#include <vector>
using namespace std; 

int printArray(vector<int> &array){
 for(int i = 0; i < array.size(); i++) cout<<array[i]<<" ";
 cout<<endl;
}

void quicksort(vector<int> &array, int start, int end){
    if(end <= start) return;
    int pivot = array[start];
    int swap_index = start+1;
    for(int i = start + 1; i <= end; i++) if(array[i] < pivot) swap(array[swap_index++],array[i]);
    swap(array[swap_index - 1], array[start]);
    quicksort(array, start, swap_index - 1);
    quicksort(array, swap_index, end);
}



int main(){
 
vector<int> unsorted_list;
 unsorted_list.push_back(1);
 unsorted_list.push_back(12);
 unsorted_list.push_back(21);
 unsorted_list.push_back(111);
 unsorted_list.push_back(11);
 unsorted_list.push_back(111111);
 unsorted_list.push_back(21);
 
 quicksort(unsorted_list, 0, unsorted_list.size()); 

 printArray(unsorted_list);

 return 0;
}
