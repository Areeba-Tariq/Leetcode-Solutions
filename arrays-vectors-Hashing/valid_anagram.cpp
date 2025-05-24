//sol1
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        int count[26]={0}; //if i use char count[26] a test case fails when char cant hold more than 127 value and that no appear more than 127 times so better use int arr
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

class Solution {
    public:
        void sortString(string& s) //otherwise pass by value pr wont work
        {
            for(int i=0;i<s.size()-1;i++) //bubble sort 
            {
                for(int j=i+1;j<s.size();j++)
                {
                    if(s[i]>s[j]) swap(s[i],s[j]);
                }
            }
        }
        bool isAnagram(string s, string t) {
            //sort strings
            sortString(s);
            sortString(t);
            if(s==t) return true;
            return false;
        }
    };
    //tc =o(n^2)
    //sort fun => sort(str.begin(),str.end()) take  O(n log n) time === more effcient than bubble sort