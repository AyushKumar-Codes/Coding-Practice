#String contain  vovel letter or not
x=input("vowel or 9 for EXIT: ")
vowels="aieouAEIOU"
while True:
    x=input("Vowel,or 9 to quit: ")
    if x.isalpha() or x=="9":
        if x=="9":
            break
        if x in vowels:
            print("vowels")
        else:
            print("not vowel")
    else:
        print("wrong input")
        continue
