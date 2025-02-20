Given an array of strings nums containing n unique binary strings each of length n, return a binary string of length n that does not appear in nums. If there are multiple answers, you may return any of them.

 

Example 1:

Input: nums = ["01","10"]
Output: "11"
Explanation: "11" does not appear in nums. "00" would also be correct.





class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        allBin = lambda x: format((set(i for i in range(0, 2**len(x[0]))) -  set(map(lambda y:int(y,2)  , x))).pop() , f'0{len(x[0])}b')
        return allBin(nums)
        
