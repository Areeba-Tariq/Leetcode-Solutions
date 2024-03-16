//v1
#include <iostream>
using namespace std;

int nexponent(int n){
    if(n==0)return 1;
    return 2*nexponent(n-1);
}
int main() {
    // Write C++ code here
    int n=3;
    int res=nexponent(n);
    cout<<res;

    return 0;
}
