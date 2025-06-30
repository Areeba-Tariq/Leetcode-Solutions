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
//tc= o(n^2)


#include <iostream>
#include<vector>
#include<map>
using namespace std;

vector<int>removeDuplicates(vector<int>&v)
{
    vector<int>ans;
    map<int,int>mp;
    int n=v.size();
    for(int i=0;i<n;i++) //o
    {
        mp[v[i]]++; 
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
#include<algorithm>// only for sort
#include<vector>
using namespace std;
void removeDuplicates(vector<int>&arr,int n)
{
    int i=0;// index for placing unique elements
    sort(arr.begin(),arr.end()); //nlogn
    for(int j=i+1;i<n&&j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j]; // overwrite duplicates
        }
    }
    arr.resize(i+1); // shrink vector to contain only unique values
}

int main() {
    vector<int>arr={1,2,3,1,2,3,4,5,6,1};
    removeDuplicates(arr,10);
    for(auto a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}