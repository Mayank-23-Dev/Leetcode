#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int max=0,sum=0;
    for (int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        if (sum<0)
            sum=0;
        if (sum>max)
            max=sum;
    }
    return max;
}
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
}