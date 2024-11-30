class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpS;
        unordered_map<char, int> mpT;
        string newT="";
        if (t.length() == s.length()) {
            for(int i=0;i<t.length();i++){
                mpS[s[i]]++;
                mpT[t[i]]++;
                if(mpT[t[i]]==1){
                    newT+=t[i];
                }
            }
            for(int i=0;i<newT.length();i++){
                if(mpT[newT[i]]!=mpS[newT[i]]){
                    return false;
                }
            }
        }
        else{return false;}
        return true;
    }
};