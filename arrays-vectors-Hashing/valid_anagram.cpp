//sol1
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        int count[26]={0};
        for(int i=0;i<s.length();i++)
        {
            count[s[i] -'a']++;
            count[t[i] -'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i])return false;
        }
        return true;
    }
};
//tc=o(n) ,sc: O(n)


//using built in sort fun
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};
//tc=nlogn---(sort fun takes nlogn for each
// string and == comparing takes o(n)since it needs 
//to compare every value of s and t)
//sc=o(n)---(Sorting each string requires O(n) additional space)

