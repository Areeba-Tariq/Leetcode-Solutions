class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back(findfibo(i));
        }
        return arr;
       
    }
    int findfibo(int n)
    {
        if(n==1 || n==0) return n;
        
        return findfibo(n-1)+findfibo(n-2);
        
    }
};