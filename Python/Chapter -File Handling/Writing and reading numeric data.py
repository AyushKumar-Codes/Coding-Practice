import random
outfile = open("Numbers.txt", "w")
for i in range(10):
	outfile.write(str(random.randint(0, 9)) + " ")
outfile.close()
infile = open("Numbers.txt", "r")
s=infile.read()
numbers=[eval(x) for x in s.split()]
for number in numbers:
	print(number,end=' ')
infile.close()

