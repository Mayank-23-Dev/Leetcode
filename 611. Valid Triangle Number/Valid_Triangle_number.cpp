#include <iostream>
#include <vector>
using namespace std;
int triangleNumber(vector<int>& nums) 
{
    int n=nums.size();
    int count=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            for (int k=j+1;k<n;k++)
            {
                if (nums[i]+nums[j]>nums[k]&&nums[j]+nums[k]>nums[i]&&nums[k]+nums[i]>nums[j])
                    count++;
            }
        }
    }
    return count;
}
int main() {
    vector<int> nums={4,2,3,4};
    cout<<triangleNumber(nums);
    return 0;
}