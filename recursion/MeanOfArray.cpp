class Solution {
  public:
    int findMean(vector<int>& arr) {
        int n=arr.size();
        return calSum(arr,n)/n;
    }
    int calSum(vector<int>& arr, int n)
    {
        if(n==1) return arr[0];//bc
        
        int v=calSum(arr,n-1);
        return v+arr[n-1];
    }
};