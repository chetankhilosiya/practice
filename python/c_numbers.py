#!/usr/bin/python
import math
from decimal import *
getcontext().prec = 100000
root_five = Decimal(5).sqrt()
sum3 = Decimal(3) + root_five
test_cases = int(input())
i = 0
while i < test_cases:
	power = Decimal(input())
	number = sum3 ** power
	answer = math.trunc(number)
	answer = answer % 1000
	if i != 0:
		print()
	print("Case #%d: %03d"%(i+1,answer),end="")
	i += 1
