class Solution
{
public:
    int romanToInt(string s)
    {
        int integer = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V')
                {
                    integer += 4;
                    i++;
                }
                else if (s[i + 1] == 'X')
                {
                    integer += 9;
                    i++;
                }
                else
                {
                    integer += 1;
                }
            }
            else if (s[i] == 'X')
            {
                if (s[i + 1] == 'L')
                {
                    integer += 40;
                    i++;
                }
                else if (s[i + 1] == 'C')
                {
                    integer += 90;
                    i++;
                }
                else
                {
                    integer += 10;
                }
            }
            else if (s[i] == 'C')
            {
                if (s[i + 1] == 'D')
                {
                    integer += 400;
                    i++;
                }
                else if (s[i + 1] == 'M')
                {
                    integer += 900;
                    i++;
                }
                else
                {
                    integer += 100;
                }
            }
            else if (s[i] == 'V')
            {
                integer += 5;
            }
            else if (s[i] == 'L')
            {
                integer += 50;
            }
            else if (s[i] == 'D')
            {
                integer += 500;
            }
            else if (s[i] == 'M')
            {
                integer += 1000;
            }
        }
        return integer;
    }
};