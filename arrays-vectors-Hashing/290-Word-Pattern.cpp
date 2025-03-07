class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,int>m1;
        map<string,int>m2;
        istringstream in(s);
        int i=0,n=pattern.size();
        for(string word;in>>word;i++)
        {
            if(i==n||m1[pattern[i]]!=m2[word])
            {
                return false;
            }
            m1[pattern[i]]=m2[word]=i+1;
        }
        if(i==n){
        return true;
        }else return false;

    }
};