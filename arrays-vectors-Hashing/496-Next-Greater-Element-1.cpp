class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        stack<int>stk;
        for(int num2:nums2)
        {
            while(!stk.empty() and stk.top()<num2)
            {
                map[stk.top()]=num2;
                stk.pop();
            }
            stk.push(num2);
        }
        for(int i=0;i<nums1.size();i++)
        {
            nums1[i]=map.count(nums1[i])?map[nums1[i]] :-1;
        }
        return nums1;
    }
};


//brute force approach

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int GE=-1;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    GE=-1;
                    for(int k=j+1;k<nums2.size();k++)
                    {
                        if(nums2[k]>nums2[j])
                        {
                            GE=nums2[k];
                            break;
                        }
                    }
                    ans.push_back(GE);
                }
            }
        }
        return ans;
    }
};