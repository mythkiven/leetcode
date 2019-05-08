#python3
class Solution:
    def twoSum(self, nums: [int], target: int) -> [int]:
        indexes = {}
        for i in range(len(nums)):
            if nums[i] in indexes:
                return [indexes[nums[i]], i]
            indexes[target - nums[i]] = i

solution = Solution()
print(solution.twoSum([-1,6,3,2,3],6))