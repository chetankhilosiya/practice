#!/usr/bin/python3
test_cases = int(input())
i = 0
while i < test_cases:
	num_values = int(input())
	line1 = input()
	line2 = input()
	strInput = line1.split()
	vector1 = []
	for s in strInput:
		vector1.append(int(s))
	strInput = line2.split()
	vector2 = []
	for s in strInput:
		vector2.append(int(s))
	vector1.sort()
	vector2.sort()
	product = 0
	for (a,b) in zip(vector1,vector2[::-1]):
		product += a*b
	if i != test_cases-1:
		print("Case #%d: %d"%(i+1,product))
	else :
		print("Case #%d: %d"%(i+1,product),end="")
	i = i+1
