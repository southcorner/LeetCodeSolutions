class Solution(object):
    def canMakeArithmeticProgression(self, arr):
        arr.sort()
        diff = arr[1] - arr[0]
        for x in range (2,len(arr)):
            if(arr[x] - arr[x-1] != diff):
                return 0
        return 1
