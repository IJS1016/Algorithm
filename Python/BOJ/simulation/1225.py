# 에러 발생

import numpy as np

nums = input().split(" ")

num1 = np.array(list(nums[0])).astype("int64")
num2 = np.array(list(nums[0])).astype("int64")
result = np.sum(num1 * num2)

print(result)
