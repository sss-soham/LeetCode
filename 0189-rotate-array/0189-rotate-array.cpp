class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle cases where k > n
        
        while (k > 0) {
            int temp = nums[n - 1];  // Store the last element before shifting
            for (int i = n - 1; i > 0; i--) {
                nums[i] = nums[i - 1];  // Shift each element to the right
            }
            nums[0] = temp;  // Move the last element to the first position
            k--;  // Reduce k after one full shift
        }
    }
};