#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;




bool numberInOrderHack(int num){
    string num_str = to_string(num);
    for(int i = 0; i < num_str.size() - 1;i++) if( (int) num_str[i] >= (int) num_str[i + 1]) return false;
    return true;
}

//Print all in-order numbers
int printInOrder(int size){
    int max = pow(10,size);
    int min = max/10; 
    cout<<min<<" "<<max<<endl;
    for(int i = min; i < max; i++){
        if(numberInOrderHack(i)) cout<<i<<" "<<endl;
    }
    return 0;
}

int main(){
    printInOrder(3);
    return 0;
}

