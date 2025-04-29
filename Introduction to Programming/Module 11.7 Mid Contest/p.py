nums1 = [1,2,3,0,0,0]
m = 3
nums2 = [2,5,6]
n = 3
num = []



for i in range(m):
    num.append(nums1[i])
for i in range(n):
    num.append(nums2[i])


nums1.clear()
for i in num:
    nums1.append(i)

for i in range(len(nums1)):
    for j in range(len(nums1)-1-i):
        if nums1[j]>nums1[j+1]:
            nums1[j],nums1[j+1]=nums1[j+1],nums1[j]
        
print(nums1)
    
    
    


    
    