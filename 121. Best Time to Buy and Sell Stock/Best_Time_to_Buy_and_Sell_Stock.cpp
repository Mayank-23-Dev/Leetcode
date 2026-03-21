#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProfit(vector<int>& nums) 
{
    int maxprofit=0,bestbuy=nums[0];
    for (int i=1;i<nums.size();i++)
    {
        if(bestbuy<nums[i])
            maxprofit=max(maxprofit,nums[i]-bestbuy);
        bestbuy=min(bestbuy,nums[i]);
    }
    return maxprofit;
}
int main() {
    vector<int> prices={7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}