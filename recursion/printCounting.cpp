//reverse printing
#include <iostream>
using namespace std;

void printCounting(int n){
    if(n==0)return;
    cout<<n;
    printCounting(n-1);
    return ;
    
    
}
int main() {

    int n=3;
    printCounting(n);

    return 0;
}
//forward printing
#include <iostream>
using namespace std;

void printCounting(int n){
   if(n==0) return;
   printCounting(n-1);
   cout<<n;
    
    
}
int main() {

    int n=3;
    printCounting(n);

    return 0;
}