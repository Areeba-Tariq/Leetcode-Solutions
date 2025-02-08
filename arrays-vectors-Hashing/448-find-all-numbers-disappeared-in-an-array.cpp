class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        // Mark numbers as negative
        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        // Find the missing numbers
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }
        
        return ans;
    }
};


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(!mp.count(i)) ans.push_back(i);
        }
        return ans;
    }
};