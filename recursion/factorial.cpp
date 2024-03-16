//v1
#include <iostream>
using namespace std;

int fac(int n){
    if(n==0)return 1;
    int small=fac(n-1);
    int bigger=n*small;
    return bigger;
}
int main() {
    // Write C++ code here
    int n=5;
    int res=fac(n);
    cout<<res;

    return 0;
}
//v2

#include <iostream>
using namespace std;

int fac(int n){
    if(n==0)return 1;
    return n*fac(n-1);
}
int main() {
    // Write C++ code here
    int n=6;
    int res=fac(n);
    cout<<res;

    return 0;
}
