#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void moveZeroes(vector<int>& nums) 
{
    vector<int> ans(nums.size(),0);
    int key=0;
    for (int i=0;i<nums.size();i++) 
    {
        if (nums[i]!=0) 
        {
            ans[key]=nums[i];
            key++;    
        }
    }
    nums = ans;
}
int main() 
{
    vector<int> nums={0,1,0,3,12};
    moveZeroes(nums);
    for (int i=0;i<nums.size();i++) 
    {
        cout<<nums[i]<<" ";
    }
}