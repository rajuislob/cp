def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        numset=set(nums)
        if len(numset)!=len(nums):
            return True
        else:
            return False
