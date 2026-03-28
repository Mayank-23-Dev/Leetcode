#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxFrequencyElements(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    int freq=1,count=1;
    int ans=0;
    for (int i=1;i<nums.size();i++)
    {
        if(nums[i]==nums[i-1])
            count++;
        else
        {
            if(count>freq)
            {
                freq=count;
                ans=count;
            }
            else if (count == freq)
                ans+=count;
            count=1;
        }
    }
    if (count > freq)
        ans=count;
    else if (count == freq)
        ans+=count;
    return ans;
}
int main() 
{
    vector<int> nums={10,20,10,5,20,20};
    cout << maxFrequencyElements(nums) << endl;
}