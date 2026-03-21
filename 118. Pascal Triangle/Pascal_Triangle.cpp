#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generate(int numRows) 
{   
    vector<vector<int>> result;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> row(i+1,1);
        for (int j=1; j<i;j++)
        {
            row[j] = result[i-1][j-1]+result[i-1][j];
        }
        result.push_back(row);
    }
    return result;
}
int main() 
{
    int numRows = 5;
    vector<vector<int>> triangle = generate(numRows);
    for(int i=0;i<triangle.size();i++)
    {
        for(int j=0;j<triangle[i].size();j++)
        {
            cout<<triangle[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}