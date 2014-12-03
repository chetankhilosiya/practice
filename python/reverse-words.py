#!/usr/bin/python
test_cases  = int(input())
i=0
while i < test_cases:
	line = input()
	array = line.split()
	print("Case #%d"%(i+1)+":",end="")
	for word in array[::-1]:
		print(" "+word,end="")
	if i != test_cases-1:
		print()
	i = i+1
