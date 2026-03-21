#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int lengthOfLastWord(string s) 
{
    int key=0;
    for (int i=s.size()-1;i>=0;i--) 
    {
        if (s[i]!=' ') 
        {
            key++;
        }
        else if (key!=0) 
        {
            break;
        }
    }
    return key;
}
int main() 
{
    string s="Hello World";
    cout<<lengthOfLastWord(s);
}