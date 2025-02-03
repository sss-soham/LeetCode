class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() == 1){
            return 1;
        }
        int val = 0;
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] == ' ' && val>0){
                break;
            }
            else{
                if(s[i] == ' ' && val == 0){
                    continue;
                }
                else {
                    val++;
                }
            }
        }
        return val;
    }
};