#!/usr/bin/python
key_combinations = {
	'a':2, 'b':22, 'c':222,
	'd':3, 'e':33, 'f':333,
	'g':4, 'h':44, 'i':444,
	'j':5, 'k':55, 'l':555,
	'm':6, 'n':66, 'o':666,
	'p':7, 'q':77, 'r':777, 's':7777,
	't':8, 'u':88, 'v':888,
	'w':9, 'x':99, 'y':999, 'z':9999,
	' ':0
}
test_cases = int(input())
i = 0
while i < test_cases:
	line = input()
	print("Case #%d: "%(i+1),end="")
	prev_num = 1				#As 1 number does not come in t9 dictionary.
	num = 1
	for ch in line:
		prev_num = num
		num = key_combinations[ch]
		if prev_num%10 == num%10:
			print(" ",end="")
		print(num,end="")
	if i != test_cases-1:
		print()
	i = i+1
