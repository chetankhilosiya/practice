#!/usr/bin/python
test_cases  = int(raw_input())
i=0
while i < test_cases:
	line = raw_input()
	array = line.split()
	print "Case #%d"%(i+1)+":",
	#for word in array[::-1]:
	print " ".join(array[::-1]),
	#print array[0]
	i = i+1
