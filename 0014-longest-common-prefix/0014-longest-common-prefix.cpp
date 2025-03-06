class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.empty()) return "";
        sort(str.begin(), str.end());
        string first = str[0];
        string last = str[str.size()-1];
        int count = 0;
        while(count < first.length() && first[count] == last[count]) count++;
        return first.substr(0, count);
    }
};