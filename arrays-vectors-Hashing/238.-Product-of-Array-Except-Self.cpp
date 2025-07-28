class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int p1=0;
        bool flag=false;
        for(auto n:nums)
        {
            if(n!=0)
            {
                p*=n;
            }
            else 
            flag=true;
           
        }
        vector<int>res;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==0)
        {
            res.push_back(p);
        }
        else
        res.push_back(p/nums[i]);
       }
      return res;
    }
};