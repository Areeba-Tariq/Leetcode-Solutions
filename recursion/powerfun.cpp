class Solution{
  public:
    //Complete this function
    int RecursivePower(int n,int p)
    {
        if(p==0) return 1;
        
        return n*RecursivePower(n,p-1);
    }
};
//e.g 2 ^ 9 , 8 ^ 6