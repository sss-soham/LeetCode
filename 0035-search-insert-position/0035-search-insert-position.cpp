class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid, ans;
        if(nums[0] > target) return 0;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(nums[mid] <= target)
            {
                if(nums[mid] == target)
                    return mid;
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid-1;
        }
        return start;
    }
};