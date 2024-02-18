//map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int num:nums)
        {
            mp[num]++;
        }
        for(auto num:mp){
            if(num.second>=2)return true;
        }
        return false;
    }
};
//Time complexity: O(n∗log(n))
//Space complexity: O(n)

//unordered map=hashmap
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool>map;
    for(int num:nums){
        //In C++, when a key is not found in an unordered_map,
        // accessing it returns a default-constructed value 
        //for the type of the mapped values. For bool, this means accessing
        // a non-existent key will return false, not NULL. So, the correct
        // condition should be if(map[num] == false)
        if(map[num]==false)
        {
            map[num]=true;
        }else
        return true;
    }
    return false;
    }
};

//using built in funs
// Shorted Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};