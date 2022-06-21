class Solution:
   def solve(self, nums):
      max=0
      length=len(nums)
      for i in range(0,length-1):
         count=1
         for j in range(i+1,length):
            if(nums[i]==nums[j]):
               count+=1
               if(max<count):
                  max=count
      return max
ob = Solution()
n=int(input())
arr=[]
for i in range(n):
    x=int(input())
    arr.append(x)

print(ob.solve(arr))