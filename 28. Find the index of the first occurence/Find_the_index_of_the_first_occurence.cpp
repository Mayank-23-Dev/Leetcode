#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int strStr(string haystack, string needle) 
{
    for (int i=0;i<haystack.size();i++) 
    {
        int key=0;
        for (int j=0;j<needle.size();j++) 
        {
            if (haystack[i+j]!=needle[j])
                break;
            key++;
        }
        if (key==needle.size())
            return i;
    }
    return -1;
}
int main() 
{
    string haystack="hello";
    string needle="ll";
    cout<<strStr(haystack,needle);
}