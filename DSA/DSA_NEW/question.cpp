#include <iostream>
#include <cmath>
using namespace std;
int DecimalToBinary(int n){
    int k, l;
    for(k = 0, l = 0; n; l += (n & 1) * pow(10, k++), n >>= 1);
    return l;
}
int main(){
    for(int i = 0; i <= 35; cout << "Binary number is " << DecimalToBinary(i++) << endl);
}