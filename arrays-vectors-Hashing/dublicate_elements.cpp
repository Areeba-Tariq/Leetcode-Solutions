//1-map(uses red black tree)
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
//tc becoz inserting a val need logn and there are n items

//2-unordered map(uses hashmap)
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
tc=o(n) ,sc=o(n)
    
//3-brute force gives TLE
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return flag;
    }
};
//tc=o(n^2), sc=o(1)

//4-using built in sort
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
//tc=o(nlogn) becoz sort takes nlogn
//sc=o(1)
