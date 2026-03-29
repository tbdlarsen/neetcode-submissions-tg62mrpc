class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        thisset = set(nums)
        return len(thisset) != len(nums)
        
        