class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>stk;
        for(auto s:S)
        {
            stk.push(s);
        }
        string newString="";
        while(!stk.empty())
        {
            newString+=stk.top();
            stk.pop();
        }
        return newString;
    }
};