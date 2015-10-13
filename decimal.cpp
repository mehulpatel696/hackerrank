#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int decimalRep (int A, int B){
    string As = to_string(A);
    string Bs = to_string(B);
    int size = (As.size() > Bs.size()) ? As.size() : Bs.size();
    string final = "";
    for(int i = 0; i < size; i++) {
        final += As[i];
        final += Bs[i];
    }
    if(As.size() > Bs.size()) final += As.substr(size, As.size());
    if(As.size() <  Bs.size()) final += Bs.substr(size, Bs.size());
    if(final.size()  > 10) return -1 ;
    return stoi(final);
}

int main(){
    cout<<decimalRep(12121232312341243,1212)<<endl;
    cout<<decimalRep(2031, 2031)<<endl;
}
