#include <iostream>
#include <vector>
using namespace std;
vector<int> plusone(vector<int>& digits)
{
    int n=digits.size(),check=0;
    for(int i=0;i<n;i++)
    {
        if (digits[i]!=9)
        {
            check=1;
            break;
        }
    }
    if(check==0)
    {
        vector<int> ans(n+1,0);
        ans[0]=1;
        return ans;
    }
    else
    {
        vector<int> ans(n,0);
        for (int i=0;i<n;i++)
            ans[i]=digits[i];
        for(int i=n-1;i>=0;i--)
        {
            if (digits[i]<9)
            {
                ans[i]=digits[i]+1;
                break;
            }
            else
                ans[i]=0;
        }
        return ans;
    }
}
int main()
{
    vector<int> nums={1,2,3};
    vector<int> ans=plusone(nums);
    for (int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}