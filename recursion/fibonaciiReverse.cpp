// find fibo and reverse it 
#include <iostream>
#include<vector>
using namespace std;
int findfibo(int i)
{
    if(i==0 || i==1) return i;
    
    return findfibo(i-1)+findfibo(i-2);
}
void reverse(vector<int>&fibo)
{
    int s=0,e=fibo.size()-1;
    while(s<e)
    {
        swap(fibo[s],fibo[e]);
        s++;e--;
    }
}
vector<int>fiboReverse(int n)
{
    vector<int>fibo;
    for(int i=0;i<n;i++)
    {
        fibo.push_back(findfibo(i));
    }
    reverse(fibo);
    return fibo;
}

int main() {
   int n=5;
   vector<int>ans=fiboReverse(n);
   for(auto a:ans)
   {
       cout<<a<<" ";
   }

    return 0;
}

//tc= o(n)
#include <iostream>
using namespace std;
void reversefibo(int n,int a,int b){
    if(n<=0) return;
    
    reversefibo(n-1,b,a+b);
    cout<<a<<" ";
}
    
int main() {
    reversefibo(5,0,1);

    return 0;
}