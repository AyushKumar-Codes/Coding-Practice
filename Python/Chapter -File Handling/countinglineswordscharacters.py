fin = open('InputData2.txt' , 'r')
charCount = wordCount = lineCount = 0	#Initialize Counters
for line in fin:				#Read each Line
  lineCount += 1				#Increment Line count
  wordCount += len(line.split())		#split() gives the words in a list
  charCount += len(line)			#Increment Character Count
print("Line count = ", lineCount)		#Print the Counts
print("Word count = ", wordCount)
print("Char count = ", charCount)