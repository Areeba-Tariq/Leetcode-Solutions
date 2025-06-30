//o(nlogn)
class Solution {
    public:
      pair<int, int> getMinMax(vector<int> arr) {
          sort(arr.begin(),arr.end());
          pair<int,int>ans=make_pair(arr[0],arr[arr.size()-1]);
          return ans;
          
      }
  };

//--recursion
class Solution {
    public:
    pair<int,int> findMax(vector<int>&arr,int n,int largest,int smallest)
    {
        if(n==0) return {smallest,largest};
        
        if(arr[n-1]>largest) largest=arr[n-1];
        if (arr[n-1]<smallest) smallest=arr[n-1];
        
        return findMax(arr,n-1,largest,smallest);
    }
  
      pair<int, int> getMinMax(vector<int> arr) {
          // code here
          int n=arr.size();
          int largest=INT_MIN;
          int smallest=INT_MAX;
          pair<int,int>ans=findMax(arr,n,largest,smallest);
          return ans;
      }
  };