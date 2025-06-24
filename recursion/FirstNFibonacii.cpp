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

//iterative
class Solution {
    public:
  
      vector<int> fibonacciNumbers(int n) {
          // code here
          vector<int>ans;
          ans.push_back(0);
          if(n>=2)
          ans.push_back(1);
          
          for(int i=2;i<n;i++)
          {
              ans.push_back(ans[i-1]+ans[i-2]);
          }
          return ans;
      }
  };