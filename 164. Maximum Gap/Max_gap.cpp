#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumGap(vector<int>& nums) {
        if (nums.size()==1)
            return 0;
        sort(nums.begin(),nums.end());
        int max=nums[1]-nums[0];
        for (int i=2;i<nums.size();i++)
        {
            if (max<nums[i]-nums[i-1])
                max=nums[i]-nums[i-1];
        }
        return max;
    }
int main() {
    vector<int> nums={3,6,9,1};
    cout<<maximumGap(nums);
    return 0;
}