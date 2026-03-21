  #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMissingAndRepeatedValues(vector<vector<int>>& nums)
{
    int n=nums.size();
    int miss,repeat;
    int tot=n*n;
    int arr[tot];
    int index=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[index]=nums[i][j];
            index++;
        }
    }
    sort(arr, arr + n*n);
    index=1;
    for(int i=0;i<n*n;i++)
    {
        if (arr[i]==index)
        {
            index++;
        }
        else if (arr[i]>index)
        {
            miss=index;
            index++;
        }
    }
    repeat=tot-((tot*(1-tot)/2)-miss);
    return {repeat, miss};
}
int main() {
    vector<vector<int>> nums={{9,1,7},{8,9,2},{3,4,6}};
    cout<<findMissingAndRepeatedValues(nums);
    return 0;
}