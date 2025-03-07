//unordered_map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) 
        {
            if(mp.count(nums[i])) return true; // count returns 1 if the key exists, otherwise 0
            else
            mp[nums[i]]=i;
        }
        return false;
    }
};

//sorting begins duplicates together
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};
//tc=o(nlogn) nlogn for sort() in worst case

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for( int i:nums)
        {
            map[i]++;
            if(map[i]>1) return true;
        }
        return false;

    }
}; tc=o(n)
