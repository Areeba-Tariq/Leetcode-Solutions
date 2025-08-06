class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        if(s.size()==1) return false;
        stk.push(s[0]);
        for(int i=1;i<s.size()||!stk.empty();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                stk.push(s[i]);
            }
            else if((s[i]==']' || s[i]=='}'|| s[i]==')')&& (stk.empty()))//for edge case: {}]
            {
                return false;
            }
            else
            {
                if(!stk.empty()){
                char ele=stk.top();
                if((ele=='(' && s[i]==')') || (ele=='{' && s[i]=='}') || (ele=='[' && s[i]==']'))
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
                }
            }
        }
        if(stk.empty())
        {
            return true;
        }
        return false;
    }
};
//more sophisticated
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            } 
            else {
                if(stk.empty()) return false;

                char top = stk.top();
                if((top == '(' && s[i] == ')') ||
                   (top == '{' && s[i] == '}') ||
                   (top == '[' && s[i] == ']')) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }

        return stk.empty(); // true if all brackets matched
    }
};
