#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findRightInterval(vector<vector<int>>& intervals) {
    int n=intervals.size();
    vector<pair<int,int>> start(n);
    for(int i=0;i<n;i++)
        start[i]={intervals[i][0],i};
    sort(start.begin(),start.end());
    vector<int> res(n,-1);
    for(int i=0;i<n;i++)
    {
        int right=intervals[i][1];
        int left=0,mid;
        while(left<n)
        {
            mid=left+(n-left)/2;
            if(start[mid].first>=right)
                n=mid;
            else
                left=mid+1;
        }
        if(left<n)
            res[i]=start[left].second;
    }
    return res;
}
int main() {
    vector<vector<int>> intervals={{1,2}};
    vector<int> res=findRightInterval(intervals);
    for(int i:res)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}