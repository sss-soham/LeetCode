/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const numSet = new Set();
    for(let i=0; i<nums.length; i++){
        const complement = target - nums[i];
        if(numSet.has(complement)){
            const ans = nums.indexOf(complement);
            return [ans, i];
        }
        numSet.add(nums[i]);
    }
};