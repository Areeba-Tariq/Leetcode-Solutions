//for decimal data
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(vector<double>&a,int n)
{
 //make buckets;
 vector<vector<double>>b(n);//
 //store data in buckets
 int b_idx=0;
 for(int i=0;i<n;i++)
 {
     b_idx=n*a[i]; // valid only if a[i] ∈ [0,1)
     b[b_idx].push_back(a[i]);
 }
 //sort data of each bucket using insertion sort algo
 for(int i=0;i<n;i++)
 {
     sort(b[i].begin(),b[i].end());
 }
 //since all buckets are sorted so store sorted data back to original arr
 int k=0;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<b[i].size();j++)
     {
         a[k++]=b[i][j];
     }
 }
}
int main() {
    vector<double>a={0.77, 0.21, 0.63, 0.41, 0.89, 0.95, 0.12, 0.39, 0.30, 0.55};//
    bucketSort(a,10);
    //print sorted data
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//for integar data
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(vector<int>&a,int noOfBuckets)
{
 //make buckets;
 vector<vector<int>>b(noOfBuckets);//
 //store data in buckets
 int b_idx=0;
 int max=*max_element(a.begin(),a.end());//min_element() returns an iterator to the smallest element → so use * to get the actual value.=>lib is <algorithm>
 int min=*min_element(a.begin(),a.end());
 int range=(max-min)/noOfBuckets;
 for(int i=0;i<a.size();i++)
 {
     b_idx=(a[i]-min)/range;
    if (b_idx == noOfBuckets)  // in case it goes out of range for max value, consider having max = 34, min = 11, and noOfBuckets = 5 now see b_idx it will be 5 (out of bounds!!)
        b_idx--;
     b[b_idx].push_back(a[i]);
 }
 //sort data of each bucket using insertion sort algo
 for(int i=0;i<noOfBuckets;i++)
 {
     sort(b[i].begin(),b[i].end());
 }
 //since all buckets are sorted so store sorted data back to original arr
 int k=0;
 for(int i=0;i<noOfBuckets;i++)
 {
     for(int j=0;j<b[i].size();j++)
     {
         a[k++]=b[i][j];
     }
 }
}
int main() {
    vector<int>a={17, 11, 21, 16, 12, 12, 34, 22, 21, 25};//
    bucketSort(a,5);
    //print sorted data
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
//Bucket Sort=>Top k frequent Elements (optimized)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //frequency of elements
        unordered_map <int,int>mp;
        for(auto n:nums)
        {
            mp[n]++;
        }

        //bucket sort started
       
        vector<vector<int>>b(nums.size()+1);
        int b_idx=0;
        for(auto m:mp)
        {
            b_idx=m.second;
            b[b_idx].push_back(m.first);
        }
        //sort the buckets=> no need as a bucket has same freq elements
        // for(int i=1;i<=nums.size();i++)
        // {
        //     sort(b[i].begin(),b[i].end());
        // }
        //
        vector<int>ans;
        for(int i=nums.size();k>0&&i>0;i--)
        {
            for(int j=0;j<b[i].size()&&k>0;j++)//inner loop is skipped when b[i]is empty=>b[i].size()=0(2D vector was declared not initilized)
            {
                ans.push_back(b[i][j]);
                k--;
                
            }
        }
        return ans;
    }
};     //tc =o(n+k)