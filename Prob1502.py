class Solution(object):
    def canMakeArithmeticProgression(self, arr):

        arr.sort()
        diff = arr[1] - arr[0]
        flag = 0
        for x in range (2,len(arr)):
            if(arr[x] - arr[x-1] == diff):
                continue
            else:
                flag = 1
                break
        if(flag):
            return 0
        else:
            return 1