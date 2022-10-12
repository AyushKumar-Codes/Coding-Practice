import random
#choice(seq) - This function a random elememt from the non-empty sequence.
#If seq is empty, interpreter raises an Index Error
seq = "abcdefghijklmnopqrstuvwxyz"
print(random.choice(seq))

#shuffle(list) - This function returns shuffled list.
l1=[10,2,3,1,20]
random.shuffle(l1)
print(l1)
# As nomencleture says suffle only works in List not valid for tuple:

#randomint(a,b) This function returns a random integer between a and b inclusive
print(random.randint(1,5))
print(random.randint(1,5))
for i in range (5):
    print(random.randint(1,100))

#seed() - This function always returns the same random value.
for i in range (5):
    random.seed(100)
    print(random.randint(1,100))

#random() gives output from range (0.0 to 1.0) in float values
print(random.random())

#ranrange(start,stop,step) - This function returns random values in the given
#sequence based on step

print(random.randrange(2,10))
print(random.randrange(2,10,3))