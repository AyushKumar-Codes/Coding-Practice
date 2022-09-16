"""OPERATORS"""
import enum

#it act as operends
 #Two types of operators #UNIARY(+,-,~,NOT)
 # +is default and - is uniary minus

 # We already studied about Arthmetic operators = exponential addition subtraction etc.

 # a= eval(input("Enter your Ist No:"))
 # b= eval(input("Enter your 2nd No:"))
 # print(a+b)
 # d=a-b
 # e=a*b
 # f=a/b
 # g=a//b
 # h=a%b


 #PROCEDURE and ASSOCIATIVITY

#  Procedure is priority of operators
# Associativity :If operators of same procedure are appearing in the expression , then in which direction we need to solve problem


#Comparision operators or Relational operators
# < greater than
# > less than
# < = greater than or equal to
# > = less than or equal to
# | = not equal to
# #  = = equality
# a=eval(input("Enter your first Number:",))
# b = eval(input("Enter your Second Number: ", ))
# print(a>b)
# print(a<b)
# print(a>=b)
# print(a<=b)
# print(a!=b)
# print(a==b)



##  Important Code  Python work with utf8
#  For {A-Z = 65-90}
#  For {a-z = 97-122}

# import sys
# print(sys.getfilesystemencoding))

 #Unicode are used to give position to characters in python

"""print(ord('A'))""" #ord is use to detect the unicode for any character ord means ordinal value

#VICE VERSA  CASE
"""print(chr(97))""" #chr is use to detect characters on respective numbers

# #Comparision of strings
# a = (input("Enter your first string:",))
# b = (input("Enter your Second String: ",))
# print(a>b)
# print(a<b)
# print(a>=b)
# print(a<=b)
# print(a!=b)
# print(a==b)
#
# print(5*6>3<5+45%2)

# """"" LOGICAL OPERATORS """
#  TWO TYES
# BINARY : AND OR #AND IS USED WHERE TWO STATEMENTS ARE STATISFIED AND IN OR ONLY ONE STATEMENT ARE SATISFIED.
#Short circuited are those which never satisfy statement or already satisfy statement
# UNARY :NOT
"""
# In case of and     #IN case of or     #In case of Not
# c1 c2 result        c1 c2 result       c1  result
# T   T   T           T   T   T          T     F 
# T   F   F           T   F   T          F     T 
# F   T   F           F   T   T
# F   F   F           F   F   F  """


# a=eval(input("a:"))
# b=eval(input("b:"))
# print(a>5 and b<8)
# print(a<100 and b>23)
# print(not (a==b))
#
# print(a>5 and b<8)

# j_pr = eval(input("Enter your jee percentage:" ))
# b_pr = eval(input("Enter your Board percentage:" ))
# print(j_pr>=85 or b_pr>=80)
# print(j_pr>=90 and b_pr>=60)

# print(2>3+5 and 6-3<10)

 #Membership Operators  # in not in
 # x="help"
 # print('he'in x)



 ####BITWISE OPERATORS
 # THESE are those opreators which works on bits of integer representation  .
# Used in = Encryption , Compression , Embeedded system graphics Rasperry Pi , Competitive coding
"""
& (Bitwise and )
| (Bitwise or) or Inclusive
^ (Bitwise XOR ) or Exclusive 
>> (Right Shift )
<< (Left Shift)
~ (Bitwise  NOT)Or One`s Complepent """

#   Right Shift #It is alternative of division.
#  In Right Shift we have to do this directly E.g
# 8>>2  2is bit so we have to just take 2 power 2 means 4 and then just divide 8 by 4 means ans is 2
print(32>>4)

#   Left  Shift #It is alternative of Multiplaction.
#  In Left  Shift we have to do this directly E.g
# if we have giver that 8<<1 then 1 is bit so take 2 power 1 that is 2 and multiply it by 8 ans will be 16
print(15<<5)


#Bitwise  Not directly it is -(n+1)
