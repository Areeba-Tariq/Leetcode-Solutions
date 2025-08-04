//TLE
class Solution {
  public:
  int MaxProfit(int W,int idx,vector<int>val,vector<int>wt)
  {
      if(idx==-1)return 0;
      else if(W==0)return 0;
      else if(wt[idx]>W) return MaxProfit(W,idx-1,val,wt);
      else
      return max((MaxProfit(W,idx-1,val,wt)),MaxProfit(W-wt[idx],idx-1,val,wt)+val[idx]);
      
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
       int n=val.size();
        return MaxProfit(W,n-1,val,wt);//treating n-1 as idx
    }
};