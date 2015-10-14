#include <iostream>
#include <vector>
using namespace std; 



int findMaxSum(vector<int> numbers, long long int  M){ 
    //Kepp track of maxSum with a var 
    //Loop through the array and find sume and it's mod and compare to maxSum 
    int maxModSum = 0; 
    int currentSum = 0; 
    for(int i = 0; i < numbers.size(); i++){
      for(int j = i; j < numbers.size(); j++){
        currentSum += numbers[j];
	cout<<currentSum<<endl;
	if(maxModSum < (currentSum%M)) maxModSum = (currentSum%M);
      }
    }
    currentSum = 0;
    return maxModSum; 


}
int main(){
	int N;
	long long int M; 
	cin>>N;
	cout<<" ";
	cin>>M;
	cout<<endl;
	vector<int> numbers; 
	for(int i = 0; i < N; i++){
	    int tmp; 
	    cin>>tmp;
	    cout<<" ";
	    numbers.push_back(tmp);
	    if( i ==  (N-1)) cout<<endl;
	}
	cout<<findMaxSum(numbers, M);
	return 0;
}
