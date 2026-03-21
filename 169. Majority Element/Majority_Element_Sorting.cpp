#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorityElement(vector<int>& nums)
{
    int tot=1,ans=nums[0];
    int n=nums.size();
    sort(nums.begin(), nums.end());
    for(int i=1;i<n;i++)
    {
        if (nums[i]==nums[i-1])
        {
            tot++;
            ans=nums[i];
        }
        else
        {
            tot=1;
            ans=nums[i];
        }
        if (tot>(n/2))
            return ans;
    }
    return ans;
}
int main() {
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
    return 0;
}