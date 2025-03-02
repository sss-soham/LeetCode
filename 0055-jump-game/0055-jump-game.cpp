class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxx = 0;
        int i = 0;
        for(i; i< nums.size(); i++){
            if(maxx < i) return false;
            maxx = max(maxx, i + nums[i]);
        }
        return true;
    }
};