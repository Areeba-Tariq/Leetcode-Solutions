//using unordered_map
class Solution {
    public:
        int mostFrequentElement(unordered_map<int,int>&mp)
        {
            int mostFrequent=0;
            int resElement=0;
            for(auto m:mp)
            {
                if(m.second>mostFrequent) mostFrequent=m.second;
            }
            //since now we get the most Frequent element so we put -1 so next time we get second highest (not this again)
            for(auto& m:mp)
            {
                if(m.second==mostFrequent) 
                {
                    m.second=-1;
                    resElement=m.first;
                    break;
                }
            }
            return resElement;
        }
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int>mp;
            //counting frequency of elements
            for(auto num:nums)
            {
                mp[num]++;
            }
            //finding k most frequent elements
            int count=k;
            vector<int>res;
            while(count>0){
            res.push_back(mostFrequentElement(mp));
            count--;
            }
            return res;
        }
    };
    //tc = o(k.n) for k times we are scaning entire map of n elements

    class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        for(int no:nums)//frequency
        {
            mp[no]++;
        }
        vector<int>frequencies;
        for(auto m:mp)
        {
            frequencies.push_back(m.second);
        }
        sort(frequencies.begin(),frequencies.end());//nlogn
        vector<int>ans;
        int eleIdx=frequencies.size()-1;
        while(k&&eleIdx>=0)//n*k
        {
            for(auto& m:mp)
            {
                if(frequencies[eleIdx]==m.second) 
                {
                    m.second=-1;
                    ans.push_back(m.first);
                    break;
                }
            }
            k--;
            eleIdx--;
        }
        return ans;
    }
};
     //O(n log n + k * n)