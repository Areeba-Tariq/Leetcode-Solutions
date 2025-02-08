class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int num : nums) {
            if (++counter[num] > nums.size() / 2) {
                return num;
            }
        }
        return 0;
    }
};


class Solution {
    //moore voting Algorithm
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int count=0;
        for(auto num:nums)
        {
            if(count==0)
            {
                candidate=num;
            }
            if(num==candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return candidate;
    }
};