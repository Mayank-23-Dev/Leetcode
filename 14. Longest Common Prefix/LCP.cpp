if (strs.empty())
    return "";
string first=strs[0];
for (int i=0;i<first.length();i++)
{
    char str=first[i];
    for (int j=1; j<strs.size();j++)
    {
        if (i >= strs[j].length()||strs[j][i]!=str)
            return first.substr(0,i);
    }
}
return first;