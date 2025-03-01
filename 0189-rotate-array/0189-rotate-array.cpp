class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle cases where k > n

        vector<int> temp(n);  // Extra space
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];  // Place elements at new positions
        }
        nums = temp;  // Copy back
    }
};
