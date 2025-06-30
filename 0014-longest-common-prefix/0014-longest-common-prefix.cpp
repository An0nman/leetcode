class Solution {
public:
    string longestCommonPrefix(vector<string> &strs)
{
    string x = "";
    string y = strs[0];
    int f = 0;
    bool flag;
    if(strs.size() <= 1)
    {
        return y;
    }
    while (f != y.length())
    {
        flag = false;
        for (int i = 1; i < strs.size(); i++)
        {
            if(strs[i].length() <= 0)
            {
                return strs[i];
            }
            if (strs[i][f] != y[f])
            {
                flag = true;
            }
        }
        if (!flag)
        {
            x += y[f++];
        }
        else
        {
            break;
        }
    }
    return x;
}
};