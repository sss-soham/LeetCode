class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int maxx = 0;
        int current_end = 0;
        int jump = 0;
        for(int i=0; i< n; i++){
            maxx = max(maxx , i + nums[i]);
            if(i == current_end){
                jump++;
                current_end = maxx;
                if(current_end >= n-1) break;
            }
        }
        return jump;
    }
};