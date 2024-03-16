//recursive

#include <iostream>
#include<vector>
using namespace std;

int fibo(int n){
    if(n==0||n==1) return n;
    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
    
}
int main() {

    int n=4;
    int res=fibo(n);
    cout<<res<<" ";
    return 0;
}


//dp-top down


#include <iostream>
#include<vector>
using namespace std;

int fibo(int n,vector<int>&dp){
   if(n==0) return 0;
   if(n==1) return 1;
   if(dp[n]!=-1)return dp[n];
   dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
   return dp[n];
    
}
int main() {

    int n=4;
    vector<int>dp(n+1,-1);
    int res=fibo(n,dp);
    cout<<res<<" ";
    return 0;
}
//tc=o(n),sc=o(n)[for recursive call stack]+o(n)[for dp_Array];

//dp-bottom up

#include <iostream>
#include<vector>
using namespace std;

int fibo(int n,vector<int>&dp){
  dp[0]=0;
  dp[1]=1;
   for(int i=2;i<=n;i++)
   {
       dp[i]=dp[i-1]+dp[i-2];
   }
   return dp[n];
}
int main() {

    int n=4;
    vector<int>dp(n+1);
    int res=fibo(n,dp);
    cout<<res<<" ";
    return 0;
}
//tc=o(n),sc=o(n)[for dp_Array]---better space;


//space optimization

#include <iostream>
#include<vector>
using namespace std;

int fibo(int n){
   int prev1=0;
   int prev2=1;
   if(n==0) return prev1;
   if(n==1) return prev2;
   int curr=0;
   for(int i=2;i<=n;i++)
   {
      curr=prev1+prev2;
      prev1=prev2;
      prev2=curr;
   }
   return curr;
    
}
int main() {

    int n=6;
    int res=fibo(n);
    cout<<res<<" ";
    return 0;
}
//tc=o(n),sc=o(1)