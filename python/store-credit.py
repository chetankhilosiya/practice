#!/usr/bin/python
test_cases = int(input())
i=0
while i<test_cases:
	credit = int(input())
	num_items = int(input())
	items = input()
	itemList = items.split()
	intList = []
	for item in itemList:
		intList.append(int(item))
	j=0
	while j < num_items:
		k = j+1
		while k < num_items:
			if intList[j] + intList[k] == credit:
				print("Case #%d" %(i+1) +": %d %d" %(j+1,k+1))
			k = k+1
		j = j+1
	i=i+1
