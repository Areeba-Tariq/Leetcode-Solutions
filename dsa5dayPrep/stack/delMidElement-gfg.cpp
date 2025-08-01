class Solution {
  public:
    // Function to delete middle element of a stack
    void delMidElement(stack<int>&s,int pos)
    {
        if(pos==1)
        {
            s.pop();
            return;
        }
        int top=s.top();
        s.pop();
        delMidElement(s,pos-1);
        s.push(top);
    }
    void deleteMid(stack<int>& s) {
        int pos=(s.size()+1)/2;//by default:int division gives floor
        delMidElement(s,s.size()-pos+1);
    }
};