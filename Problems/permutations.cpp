#include <iostream> 
#include <vector> 
#include <string> 

using namespace std;


vector<string> permutations(string str, int start, int end){
 
 vector<string> perms;
 if ( start < end) return perms;
 if(start - end == 1){
   perms.push_back((string) str[start]);
   return perms;
 }
 
 for(int i = start; i < end; i++){
   vector<string> tmp = permutations(str, start + 1, end);
   for(int j = 0; j < tmp.size(); j++){
     string temp_str = str[start] + tmp[j];
     perms.push_back(temp_str);
   }
 }

}


int printArray(vector<string> str){
 for (int i = 0; i < str.size(); i++) {
 	cout<<str[i]<<endl;
 }
}

int main(){
  string s = "abc";
  vector<string> strs;
  printArray(permutations(s,0, s.size() - 1)); 
 // printArray(strs);
}
