class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        a = set(nums)

        first_max = float('-inf')
        second_max = float('-inf')
        third_max = float('-inf')

        if len(a)<3:
            return max(a)
    
        for i in a:
            if(first_max < i):
                first_max = i

        for i in a:
            if(second_max < i and i < first_max):
                second_max = i

        for i in a:
            if(third_max < i and i < second_max):
                third_max = i

        return third_max


        