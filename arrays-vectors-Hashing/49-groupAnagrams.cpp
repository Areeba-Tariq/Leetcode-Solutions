class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>copyStr=strs;
        //sort entire vector of strings
        for(string &s:copyStr)
        {
            sort(s.begin(),s.end());
        }
        unordered_map<string,vector<int>> mp;
        //adding idxs of sorted strs
        for(int i=0;i<copyStr.size();i++)
        {
            mp[copyStr[i]].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto m:mp)
        {
            vector<string>v;
            for(auto idx:m.second)
            {
                v.push_back(strs[idx]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};//tc=o(n*klogk) where n=no of str and k=len of str  sc=o(n*k)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> grp_ana;
        for( string str: strs)
        {
            string sortedstr=str;
            sort(sortedstr.begin(),sortedstr.end());
            mp[sortedstr].push_back(str);
        }
        for(auto vec:mp)
        {
            grp_ana.push_back(vec.second);
        }
        return grp_ana;

    }
};//tc=o(n*klogk) where n=no of str and k=len of str  sc=o(n*k)