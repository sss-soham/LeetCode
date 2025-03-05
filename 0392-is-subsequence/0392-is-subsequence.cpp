class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == "") return true; 
        int i=0;
        int j=0;
        for(j; j< t.length(); j++){
            if(s[i] == t[j]){
                i++;
            }
        }
        return i == s.length();
    }
};