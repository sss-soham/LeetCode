class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int j = 0;
        int k = 0;
        for(int i=1; i< nums.size() ; i++){
            if(nums[i] == nums[i-1]) {
                count++;
                j = nums[i];
            }
            else {
                count = 1;
                k = nums[i];
            }
        }
        int half = (nums.size()-1)/2;
        if(count > half){
            return k;  
        }
        else return j;
    }
};