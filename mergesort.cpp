/*
 mergesort.cpp
*/

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void print(vector<int>& v);
void merge(vector<int>& v, int start, int mid, int end, vector<int>& temp) {
	  int leftStart = start;
	    int leftEnd = mid;
	      int rightStart = mid + 1;
	        int rightEnd = end;
		  int currentIndex = start;
		    
		    while (leftStart <= leftEnd && rightStart <= rightEnd) {
			        if (v[leftStart] < v[rightStart]) {
					      temp[currentIndex++] = v[leftStart++];
					          } else {
							        temp[currentIndex++] = v[rightStart++];
								    }
				  }

		      // Only one of these two while loops will run
		      while (leftStart <= leftEnd) {
			          temp[currentIndex++] = v[leftStart++];
				    }
		        while (rightStart <= rightEnd) {
				    temp[currentIndex++] = v[rightStart++];
				      }

			  // Put everything from temp back in the main vector
			  while (start <= end) {
				      v[start] = temp[start];
				          ++start;
					    }
}

void mergesort(vector<int>& v, int start, int end, vector<int>& temp) {
	  if (end <= start) return;
	    int mid = (start + end) / 2;
	      mergesort(v, 0, mid, temp);
	        mergesort(v, mid + 1, end, temp);
		  merge(v, start, mid, end, temp);
}

void mergesort(vector<int>& v) {
	  vector<int> temp(v.size());
	    mergesort(v, 0, v.size() - 1, temp);
}

void print(vector<int>& v) {
	  for (int i = 0; i < v.size(); ++i) {
		      cout << v[i] << " ";
		        }
	    cout << endl;
}

int main() {
	  vector<int> v;
	    srand(time(NULL));
	      for (int i = 0; i < 10; ++i) {
		          v.push_back(rand() % 20);
			    }
	        print(v);

		  mergesort(v);
		    print(v);
}

