//BF
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        // code here
    
        for(int i=0;i<s.length()-1;i++)
        {
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i]==s[j])
                {
                    s[j]='#';
                }
            }
        }
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')ans+=s[i];
        }
        return ans;
    }
};

// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        
    string s1="";
    vector<int>freq(256,0);
    
       for(char c:s)
       {
           if(freq[c]==0)s1+=c;
           
           freq[c]++;
       }
       return s1;
    }
};