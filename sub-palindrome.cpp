#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;



unordered_set<string>* generate_unique_strings(string str){
    
    unordered_set<string> strings;
    for(int i = 0; i < str.length(); i++){
        for(int j = str.length() - i; j > 0 ; j--){
            string sub_str = str.substr(i, j);
            strings.insert(sub_str);
        }
        
    }
    
    return &strings;
    
}


bool check_palindrome(string str){
    for(int i = 0; i < str.length()/2; i++) if(str[i] != str[str.length()-1-i]) return false;
    return true;
}



int palindrome(string str){
    
    unordered_set<string>* vec = generate_unique_strings(str);
    cout<<vec->size()<<endl;
    int plains = 0;
    
    for(unordered_set<string>::iterator itr = vec->begin(); itr != vec->end(); ++itr){
        cout<<*itr<<endl;
        if(check_palindrome(*itr)) plains++;
    }
    
    return plains;
}



int main(){
    
    int man = palindrome("racecar");
    cout<<man;
    return 0;
    
}

