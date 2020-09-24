class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        good_pairs = 0
        for x in range (0,len(nums)-1):
            for y in range (x+1, len(nums)):
                if(nums[x] == nums[y]):
                    good_pairs = good_pairs + 1
        return good_pairs