class Solution {
public:
int LCS(string text1,string text2,int i1,int i2)
{
    if(i1==-1 ||i2==-1)return 0;
    else if(text1[i1]==text2[i2]) return 1+LCS(text1,text2,i1-1,i2-1);
    else
    {
        return max(LCS(text1,text2,i1-1,i2),LCS(text1,text2,i1,i2-1));
    }
}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        return LCS(text1,text2,n-1,m-1);
    }
};