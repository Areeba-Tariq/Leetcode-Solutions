class Solution {
  public:
  
  void findReverse(string &s1,int start,int end)
  {
      if(start>=end)return;
      
      char a=s1[start];//swap
      s1[start]=s1[end];
      s1[end]=a;
      
      findReverse(s1,start+1,end-1);
  }
    string reverseString(string& s) {
     findReverse(s,0,s.size()-1);
     return s;
    }
};

//v2
class Solution {
  public:
  
  string findReverse(string s1,int start,int end)
  {
      if(start>=end)return s1;
      
     
      swap(s1[start],s1[end]); 
      return findReverse(s1,start+1,end-1);
  }
    string reverseString(string& s) {
     return findReverse(s,0,s.size()-1);
    }
};

//iterative:
class Solution {
  public:
    string reverseString(string& s) {
        int n = s.size();
        string s1 = "";
        for(int j = n - 1; j >= 0; j--) {
            s1 += s[j];  
        }
        return s1;
    }
};

class Solution {
  public:
    string reverseString(string& s) {
        int n = s.size();
        string s1 = "";
        for(int j = n - 1; j >= 0; j--) {
            s1.push_back(s[j]);  
        }
        return s1;
    }
};

class Solution {
  public:
    string reverseString(string& s) {
    int n=s.size();
      for(int i=0,j=n-1;i<j;i++,j--)
      {
          swap(s[i],s[j]);
      }
      return s;
    }
};
