#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    int count=1;
    for (int i=1;i<=nums.size();i++) 
    {
        if (nums[i]==nums[i-1])
            count++;
        else 
        {
            cout<<nums[i-1]<<" : "<<count<<endl;
            count=1;
        }
    }
}
int main() 
{
    vector<int> nums={10,20,10,5,20,20};
    findDuplicates(nums);
}