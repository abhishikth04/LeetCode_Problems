class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        list = nums1 + nums2
        list.sort()
        l = len(list)

        if(l%2 == 0):
            return (list[l//2] + list[(l-1)//2])/2
        else:
            return list[(len(list)//2)]
        