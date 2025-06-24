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

class Solution {
    public:
      int sumCal(vector<int>& arr, int n) {
          if(n == 0) return 0;
          return arr[n - 1] + sumCal(arr, n - 1);
      }
  
      int findMean(vector<int>& arr) {
          int sum = sumCal(arr, arr.size());
          return sum / arr.size();
      }
  };