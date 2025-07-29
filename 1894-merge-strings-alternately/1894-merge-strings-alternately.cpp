class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string mergedString;
        char len;

        if (word1.length() == word2.length())
        {
            for (int i = 0; i < word1.length(); i++)
            {
                mergedString += word1[i];
                mergedString += word2[i];
            }
        }
        else if (word1.length() > word2.length())
        {
            int i = 0;
            for (i = 0; i < word2.length(); i++)
            {
                mergedString += word1[i];
                mergedString += word2[i];
            }
            for (i; i < word1.length(); i++)
            {
                mergedString += word1[i];
            }
        }
        else
        {
            int i = 0;
            for (i = 0; i < word1.length(); i++)
            {
                mergedString += word1[i];
                mergedString += word2[i];
            }
            for (i; i < word2.length(); i++)
            {
                mergedString += word2[i];
            }
        }
        return mergedString;
    }
};