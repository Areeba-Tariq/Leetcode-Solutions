
class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool findPalindrome(string s1,int start,int end)
    {
        if(start>=end) return true;
        else if(s1[start]!=s1[end]) return false;
        
        return findPalindrome(s1,start+1,end-1);
        
        
    }
    bool isPalindrome(string& s) {
        return findPalindrome(s,0,s.size()-1);
    }

};

class Solution {
    public:
      bool isPalindrome(string& s) {
          int n=s.size();
          int l=0,r=n-1;
          while(l<=r)
          {
              if(s[l]!=s[r]) return false;
              l++,r--;
          }
          return true;
      }
  };