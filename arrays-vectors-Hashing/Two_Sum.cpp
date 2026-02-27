//brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};
//tc=o(n^2),sc=o(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;

        int complement=0;
        for(int i=0;i<nums.size();i++)
        {
            complement=target-nums[i];
            if(mp.count(complement))
            {
                return {mp[complement],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};