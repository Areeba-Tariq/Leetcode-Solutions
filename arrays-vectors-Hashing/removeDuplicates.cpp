//bruteforce=place -1 when duplicate occur in arr and if ele !=-1 place in ans arr
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

vector<int>removeDuplicates(vector<int>&v)
{
    vector<int>ans;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j]) v[j]=-1;
        }
        if(v[i]!=-1){
        ans.push_back(v[i]);
        }
    }
    return ans;
}
int main() {
    // Write C++ code here
   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(1);
   v.push_back(2);
   v.push_back(1);
   v.push_back(3);
   v.push_back(3);
   v.push_back(4);
   v.push_back(7);
   v.push_back(9);
   v.push_back(4);
   //1,2,3,4,7,9
   vector<int>ans=removeDuplicates(v);
   for(auto a:ans)
   {
       cout<<a<<" ";
   }

    return 0;
}
//tc= o(n)

// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<map>
using namespace std;

vector<int>removeDuplicates(vector<int>&v)
{
    vector<int>ans;
    map<int,int>mp;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++; //o(1)on avg
    }
    for(auto m:mp)
    {
        ans.push_back(m.first);
    }
    return ans;
}
int main() {
    // Write C++ code here
   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(1);
   v.push_back(2);
   v.push_back(1);
   v.push_back(3);
   v.push_back(3);
   v.push_back(4);
   v.push_back(7);
   v.push_back(9);
   v.push_back(4);
   //1,2,3,4,7,9
   vector<int>ans=removeDuplicates(v);
   for(auto a:ans)
   {
       cout<<a<<" ";
   }

    return 0;
} //o(nlogn)
#include <iostream>
#include <vector>
#include <algorithm>  // only for sort
using namespace std;

vector<int> removeDuplicates(vector<int>& v) {
    sort(v.begin(), v.end());  // O(n log n)

    int n = v.size();
    int index = 0;  // index for placing unique elements

    for (int i = 1; i < n; i++) {
        if (v[i] != v[index]) {
            index++;
            v[index] = v[i];  // overwrite duplicates
        }
    }

    v.resize(index + 1);  // shrink vector to contain only unique values
    return v;
}
int main()
{
    vector<int>v={1,1,2,1,3,4,2,1};
    removeDuplicates(v);
    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    return 0;
}
