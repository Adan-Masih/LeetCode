class Solution(object):
    def findErrorNums(self, nums):
        
        n = len(nums)
        nums_set = set(nums)

        duplicate = sum(nums) - sum(nums_set)

        total = 0
        for i in range(1, n + 1):
            total += i

        missing = total - sum(nums_set)

        return [duplicate, missing]

        