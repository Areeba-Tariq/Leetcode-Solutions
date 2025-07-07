//tc =o(logn) and sc=o(logn)
#include <iostream>
using namespace std;
int findBinary(int n,int&count)
{
    if(n<=1)
    {
        ++count;
         return 1;
    }
    int get=findBinary(n/2,count);
    if(n%2==1) 
    ++count;
    return (get*10)+n%2;
}
int main() {
    int n=19,count=0;
    int b=findBinary(n,count);
    cout<<b<<endl<<count;
    return 0;
}