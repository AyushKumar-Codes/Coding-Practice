fr = open('TextData.txt','r') 			# Open the file for read
fw = open('NewFile.txt', 'w')   		# Open the file for write (new file)
fw.write(fr.read())				# Read the file and copy it to the new file
fr.close()					# Close the input file
fw.close()				# Close the new file
fr1 = open('NewFile.txt', 'r+')			# Open the new file as read / write
print(fr1.read(12))				# read and print the first 12 characters
print(fr1.tell())				# Print the read cursor position( position is 0 based)
print(fr1.write("this is the new text"))		# Write some text (length 20). This is always written at the end
print(fr1.seek(12))				# Position the cursor at 12
print(fr1.read(1))				# Read and print the next character (at cursor position 12)
print(fr1.seek(15))				# Position the cursor at 15
print(fr1.read(10))				# Read and print 10 characters from this position
print(fr1.read())		# read() always reads the entire file irrespective of cursor position and changes the cursor position to the end
fr1.close()				# Close the file
