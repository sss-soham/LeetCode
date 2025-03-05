class Solution {
public:
    bool isPalindrome(string s) {
        // int start = 0;
        // int end = s.length() - 1;
        // while(start <= end){
        //     if(!isalnum(s[start])){
        //         start++;
        //         continue;
        //     }
        //     if(!isalnum(s[end])){
        //         end--;
        //         continue;
        //     }
        //     if(tolower(s[start]) != tolower(s[end])) return false;
        //     else{
        //         start++;
        //         end--;
        //     }
        // }
        // return true;

        stack<char> str;
        for(char c: s){
            if(isalnum(c)){
                str.push(tolower(c));
            }
        }
        for(char c: s){
            if(isalnum(c)){
                if(tolower(c) != str.top()) return false;
                str.pop();
            }
        }
        return true;
    }
};