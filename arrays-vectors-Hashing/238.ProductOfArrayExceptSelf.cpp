//bruteForce
#include <iostream>
using namespace std;

int main() {
    int nums[5]={1,2,1,3,2};
    int ans[5];
    int p=1;
    for(int i=0;i<5;i++)
    {
        p=1;
        for(int j=0;j<5;j++)
        {
            if(j!=i){
            p=p*nums[j];
            }
        }
        ans[i]=p;
    }
    //displaying p;
    for(int i=0;i<5;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
//`