//usage of monotonic stack
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>stk;
        unordered_map<int,int>mp;
        stk.push(nums2[0]);
        vector<int>temp;
        for(int i=1;i<nums2.size();i++)
        {
            if(!stk.empty() && stk.top()>nums2[i])
            {
                stk.push(nums2[i]);
            }
            else
            {
                while(!stk.empty() && stk.top()<nums2[i])
                {
                    temp.push_back(stk.top());
                    stk.pop();
                }
                ///
                int j=temp.size()-1;
                while((!temp.empty()) && (nums2[i]>temp[j]))
                {
                    mp[temp[j]]=nums2[i];
                    temp.resize(temp.size()-1);
                    j--;
                }
                stk.push(nums2[i]);
            }
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            if(mp[nums1[i]]) //imp note at that
            {
                ans.push_back(mp[nums1[i]]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
//note:Using if (mp[key]) creates the key if it doesn’t exist and give default value (0 for int values)=>becomes if (0) → which is false.