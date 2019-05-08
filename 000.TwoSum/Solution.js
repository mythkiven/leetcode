class Solution {
    twoSum(nums,target){
        var indexes = [];
        for (var i = 0, len = nums.length; i < len; i++) {
            var tmp = target - nums[i];
            if (indexes[tmp] !== undefined) {
                return [indexes[tmp], i];
            }
            indexes[nums[i]] = i;
        }
    }
}
var solution = new Solution();
console.log(solution.twoSum([-1,6,3,2,3],6));