import pickle			# imports the pickle library
Students = [['John', '501', 20, 92.5],['Kohli', '502', 21, 95.5], ['Ganga','503', 20, 90.5],['Gayathri','504', 20, 82.5],['Krishna','505', 20, 96.5]]
fst = open("students.dat",'wb')		# Open the output file Notice the the b after w to indicate this is a binary file
for student in Students:
	pickle.dump(student, fst)		# Write each student
fst.close()				# Close the output file
fst = open("students.dat", 'rb')		# Open the file as input binary
data = pickle.load(fst)			# Read the first record
try:														# The Endof file is indicated as EOFError exception, we need to catch this exception
  while(True):
    print(data)
    data = pickle.load(fst)
except:
  print("Bye")