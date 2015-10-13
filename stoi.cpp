#include <iostream>
#include <string>
#include <math.h>
using namespace std;

signed long long parseLong(string str){
    //use ASCII 48 - (int) char;
    int hasSign = 0;
    int size = str.size() - 1;
    if((int) str[0] == 43 || (int) str[0] == 45){
        hasSign = 1;
        size--;
    }
    signed long long number = 0;
    for(int i = hasSign; i < str.size() ; i++){
        if( (int) str[i] > 57 || (int) str[i] < 48 ) return -1;
        number += (pow(10,size)) * ((int) str[i] - 48);
        size--;
    }
    if( (int) str[0] == 45) return number * -1;
    return number;
}

int main(){
    cout<<parseLong("123")<<endl;
    cout<<parseLong("11111123")<<endl;
    cout<<parseLong("-123")<<endl;
    cout<<parseLong("1ff23")<<endl;
    cout<<parseLong("111111111126")<<endl;
    cout<<parseLong("8901a")<<endl;
    return 0;
}
