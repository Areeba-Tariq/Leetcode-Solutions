//recursive- algo class sol

#include <iostream>
using namespace std;
int coin_change(int *arr,int n,int amt)
{
    if(n==1 || n<=0)return amt;
    if(amt==0) return 0;
    if(arr[n-1]>amt)
    {
        return coin_change(arr,n-1,amt);
    }
    else
    {
        return min((coin_change(arr,n-1,amt)),1+(coin_change(arr,n,amt-arr[n-1])));
    }
}
int main() {
    int* arr=new int[3]{1,2,3};
    int amt=8;
    int n=3;
    
    cout<<coin_change(arr,n,amt);
    return 0;
}
//dp conversion-algo class sol

#include <iostream>
using namespace std;

int coin_change(int *arr,int n,int amt)
{
    int R[n][amt]; //declaration
    for(int j=0;j<amt;j++) //intilization
    {
        R[0][j]=j;
    }
    for(int i=0;i<n;i++)
    {
        R[i][0]=0;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<amt;j++)
        {
            if(arr[i]>j){
            R[i][j]=R[i-1][j];
            }
            else
            {
                R[i][j]=min((R[i-1][j]),(1+R[i][j-arr[i]]));
            }
        }
    }
    return R[n-1][amt-1];
}
int main() {
    int* arr=new int[3]{1,2,3};
    int amt=8;
    int n=3;//gives correct sol
int* arr = new int[3]{1, 5, 7};
int amt = 11;
int n = 3; //gives incorrect sol
    
    cout<<coin_change(arr,n,amt);
    return 0;
}
//=>above code doesnot tackle edge and imp cases--v basic

//TLE-leetcode
class Solution {
public:
int MinCoins(vector<int> coins, int n, int amt)
{
    if (n == 0) {
        if (amt % coins[0] == 0) return amt / coins[0]; //just this changes in sol2
        else return -1;
    }

    if (amt == 0) return 0;

    if (coins[n] > amt) {
        return MinCoins(coins, n - 1, amt);
    }

    int notTake = MinCoins(coins, n - 1, amt);
    int take = MinCoins(coins, n, amt - coins[n]);

    if (take != -1) take = 1 + take;

    if (take == -1 && notTake == -1) return -1;
    else if (take == -1) return notTake;
    else if (notTake == -1) return take;
    else return min(take, notTake);
}

int coinChange(vector<int>& coins, int amount) {
    return MinCoins(coins, coins.size() - 1, amount);
}
};

//TLE-leetcode
class Solution {
public:
int MinCoins(vector<int> coins, int n, int amt)
{
    if (n == -1 && amt) { //new cond
        return -1;
    }
    else if(n==-1 and amt==0) //new cond
    {
        return 0;
    }

    else if (amt == 0) return 0;

    else if (coins[n] > amt) {
        return MinCoins(coins, n - 1, amt);
    }
    else{

    int notTake = MinCoins(coins, n - 1, amt);
    int take = MinCoins(coins, n, amt - coins[n]);

    if (take != -1) take = 1 + take;

    if (take == -1 && notTake == -1) return -1;
    else if (take == -1) return notTake;
    else if (notTake == -1) return take;
    else return min(take, notTake);
    }
}

int coinChange(vector<int>& coins, int amount) {
    return MinCoins(coins, coins.size() - 1, amount);
}
};
//dp sol-leetcode
class Solution {
public:
int MinCoins(vector<int> coins, int n, int amt)
{
    vector<vector<int>>comp(n,vector<int>(amt+1,1e9));
    for(int j=0;j<=amt;j++)
    {
        if(j%coins[0]==0)
        {
            comp[0][j]=j/coins[0];
        }
    }
    for(int i=0;i<n;i++)
    {
        comp[i][0]=0;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=amt;j++)
        {
            if(coins[i]>j)
            {
                comp[i][j]=comp[i-1][j];
            }
            else
            {
                int notTake=comp[i-1][j];
                int take=1e9;
                if (j>=coins[i]){
                 take = comp[i][j-coins[i]];
                }
                if(take!=1e9) {
                    take=1+take;
                }
                comp[i][j]=min(take,notTake);
            }
        }
    }
    return comp[n-1][amt]==1e9?-1:comp[n-1][amt];
}

int coinChange(vector<int>& coins, int amount) {
    return MinCoins(coins, coins.size(), amount);
}
};

