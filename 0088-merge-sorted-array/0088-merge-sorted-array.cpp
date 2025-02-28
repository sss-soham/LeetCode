class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int> temp;
        // int i=0;
        // int j=0;
        // while(i<m && j<n){
        //     if(nums1[i] < nums2[j]){
        //         temp.push_back(nums1[i++]);
        //     } else{
        //         temp.push_back(nums2[j++]);
        //     }
        // }
        // while(i<m) temp.push_back(nums1[i++]);
        // while(j<n) temp.push_back(nums2[j++]);

        // for(int k = 0; k< m+n; k++){
        //     nums1[k] = temp[k];
        // }

        int i = m-1;
        int j = n-1;
        int k = m+n - 1;

        while(j >= 0){
            if(i>=0 && nums1[i]>nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--];
        }
    }
};