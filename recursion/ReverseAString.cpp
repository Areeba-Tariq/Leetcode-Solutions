class Solution {
  public:
  
  void findReverse(string &s1,int start,int end)
  {
      if(start>=end)return;
      
      char a=s1[start];
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