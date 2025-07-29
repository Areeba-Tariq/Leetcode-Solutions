//tc=o(n) but leetcode has constrainst to not use division operator
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int count=0;
        bool flag=false;
        for(auto n:nums)
        {
            if(n!=0)
            {
                p*=n;
            }
            else //contain 0
            {
                flag=true;
                count++;
            }
           
        }
        vector<int>res;
       for(int i=0;i<nums.size();i++)
       {
         if(flag)
         {
            if(nums[i]==0 && count==1) //some edge cases like [4,0,1],[4,0,0],[0,0,0]
            {
                res.push_back(p);
            }
            else res.push_back(0);
         }
         else
         {
            res.push_back(p/nums[i]);
         }
       }
      return res;
    }
};
//optimized =>without using / , tc=o(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prefix arr
        vector<int>prefix_arr;
        int prefix=1;
        prefix_arr.push_back(1);
        for(int i=0;i<nums.size()-1;i++)
        {
            prefix*=nums[i];
            prefix_arr.push_back(prefix);
        }
        //suffix arr
        vector<int>res;
        int suffix=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            res.push_back(prefix_arr[i]*suffix);
            suffix*=nums[i];
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
//polished optimze solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix_arr(n);
        vector<int> res(n);
        
        // Step 1: Build prefix product array
        prefix_arr[0] = 1;  // Nothing before index 0
        for (int i = 1; i < n; i++) {
            prefix_arr[i] = prefix_arr[i - 1] * nums[i - 1];
        }

        // Step 2: Build result using suffix on the fly
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] = prefix_arr[i] * suffix;
            suffix *= nums[i];
        }

        return res;
    }
};
