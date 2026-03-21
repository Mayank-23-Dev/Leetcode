#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums)
{
    int tot=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {   tot=0;
        for(int j=0;j<n;j++)
        {
            if (nums[i]==nums[j])
                tot++;
        }
        if (tot>n/2)
        {
            return nums[i];
        }
    }
    return -1;
}
int main() {
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
    return 0;
}