import random
set_1={"It takes more than a year for light to travel between the Earth and the Sun.":"False","Neptune has rings.":"True","Scientists believe that the universe is about 13.8 billion years old.":"True","Mercury has the hottest surface temperature of any planet.":"False","It is generally believed that a supermassive black hole lies at the center of the Milky Way.":"True"}
list1=list(set_1.keys())
random.shuffle(list1)
set_2={"Ruler of Ballala Sen Dynasty introduced Kulinism in Bengal":"True","The Vijay Stambh of Chittorgarh was built to commemorate the victory of Rana Kumbha in 'Battle of Sarangpur'":"True","Rupee was the standard gold coin of the Mughals":"False","Treaty of Purandar was signed between Chatrapati Shivaji Maharaj and Raja Man Singh":"False","Rajendra I of the Chola dynasty invaded South-East Asia":"True"}
list2=list(set_2.keys())
random.shuffle(list2)
set_3={'Meghalaya is surrounded by Bangladesh in three sides': "False", "1400 kilometers is the total length of the Ganga plain?": "True", "Semi black soils is the meaning of the term 'Khadar'": "False", "The Headquarters of Eastern Railway Zone of Indian Railway is located at Lucknow": "False", "Kaziranga national park is famous for Rhinoceros": "True"}
list3=list(set_3.keys())
random.shuffle(list3)
set_4={"Introduction of Universal Suffrage in Indian Constitution was passed without virtually any debate":"True","India borrowed the provision of the First Past the Post system from the Irish constitution":"False","The members of the Constituent Assembly were Directly elected":"False","The freedom of speech and expression falls under article 14":"False","Abraham Lincoln States That 'Democracy is a government of the people, by the people, and for the people'":"True"}
list4=list(set_4.keys())
random.shuffle(list4)
set_5={"Vitamin k is required for Normal Blood Circulation":"True","Lac is the scarlet resinous secretion from Insects":"True","By Ethylene gas commercial fruit growers control the ripening time of fruits":"True","Scientific name of Lion is 'Canis Leo'":"False","Bisecps muscles is the strongest muscle in Human Body":"False"}
list5=list(set_5.keys())
random.shuffle(list5)
round=[list1,list2,list3,list4,list5]
random.shuffle(round)
round_name=[]
results=[]
n=1
r=1
total_score=25
Score=0
set=0
neg=0
plus=5
fail=0
bonus=0
print("Welcome to QUIZ GAME !".center(170," "))
print("You Will Have Only 1 Chance To Answer So, Answers Wisely (^_^)\n".center(170," "))
for j in round:
    if fail==1:
        break
    if Score >= (total_score-25) and Score!=0:
        print("Congratulations !! ^_^ BONUS Score '{}' is added to your account".format(bonus).center(170, " "))
        print("\n")
        Score = Score + bonus
    if j==list1:
        print("<<<ROUND {} (((Questions Based On Astronomy)))>>>\n".format(r).center(170, " "))
        print(" Negative Marking = {}    Plus Marking = +{}   BONUS On Score = {}".format(-neg, plus,total_score).center(170, " "))
        round_name.append("    (Astronomy)    ")
        set=set_1
    if j==list2:
        print("<<<ROUND {} (((Questions Based On History)))>>>\n ".format(r).center(170, " "))
        print(" Negative Marking = {}    Plus Marking = +{}   BONUS On Score = {}".format(-neg, plus,total_score).center(170, " "))
        round_name.append("     (History)     ")
        set = set_2
    if j==list3:
        print("<<<ROUND {} (((Questions Based On Geography)))>>>\n ".format(r).center(170, " "))
        print(" Negative Marking = {}    Plus Marking = +{}   BONUS On Score = {}".format(-neg, plus,total_score).center(170, " "))
        set = set_3
        round_name.append("    (Geography)    ")
    if j==list4:
        print("<<<ROUND {} (((Questions Based On Constitution)))>>>\n ".format(r).center(170, " "))
        print(" Negative Marking = {}    Plus Marking = +{}   BONUS On Score = {}".format(-neg, plus,total_score).center(170, " "))
        set = set_4
        round_name.append("(Political Science)")
    if j==list5:
        print("<<<ROUND {} (((Questions Based On Biology)))>>>\n ".format(r).center(170, " "))
        print(" Negative Marking = {}    Plus Marking = +{}   BONUS On Score = {}".format(-neg, plus,total_score).center(170, " "))
        set = set_5
        round_name.append("     (Biology)     ")
    for i in j:
        print(("=> Current Score = \"{}\"".format(Score)).center(165," "))
        print("\n\n"+str(n)+".) "+i)
        while True:
            ans=input("True or False ? = ")
            if ans=="True" or ans=="False" or ans=="f" or ans=="false" or ans=="t" or ans=="true" or ans=="T" or ans=="F":
                break
            else:
                print("Choose Correct Option")
        if ans==(set[i].upper()) or ans==(set[i].lower()) or ans==(set[i]) or ans==(set[i][0].upper()) or ans==(set[i][0].lower()):
            Score=Score+plus
            if r == 5 and n == 5:
                print("\nCongratulation! Right Answer ^_^ +{}".format(plus))
                print("<<<ROUND {} COMPLETED>>>".format(r).center(165, " "))
                print("Total Score = {} ; Score Required to qualify the round= {}".format(Score, total_score // 2).center(165, " "))
                if Score > (total_score // 2):
                    print("You Qualified Final ROUND ^_^")
                    result="   Qualified  "+"/ Score: "+str(Score)
                else:
                    print("You Not Qualified Final ROUND")
                    result="Not Qualified "+"/ Score: "+str(Score)
            elif Score < (total_score//2) and n==5:
                print("\nCongratulation! Right Answer ^_^ +{}".format(plus))
                print("<<<ROUND {} COMPLETED>>>".format(r).center(165, " "))
                print("Total Score = {} ; Score Required to qualify the Round= {}".format(Score,total_score//2).center(165, " "))
                result="Not Qualified "+"/ Score: "+str(Score)
                print("You not qualified ROUND {} , Sorry You can't continue to next ROUND {} :-(".format(r,r+1))
                print("GAME OVER".center(170, " "))
                print("Thank you for playing , Better try next time".center(170, " "))
                fail=1
                break
            elif Score >= (total_score//2) and n==5:
                print("\nCongratulation! Right Answer ^_^ +{}".format(plus))
                print("<<<ROUND {} COMPLETED>>>".format(r).center(165, " "))
                print("Total Score = {} ; Score Required to qualify the Round= {}".format(Score,total_score//2).center(165, " "))
                result="   Qualified  "+"/ Score: "+str(Score)
                while True:
                    print("You qualified ROUND {} ,Do You want to continue to ROUND {}".format(r,r+1))
                    exit = input("Yes or No ? ")
                    if exit == "no" or exit == "N" or exit == "No" or exit == "n" or exit=="NO":
                        print("GAME OVER".center(170, " "))
                        print("Thank you for playing , Better try next time".center(170, " "))
                        quit()
                    elif exit == "Yes" or exit == "Y" or exit == "y" or exit == "yes" or exit=="YES":
                        break
                    else:
                        print("\nEnter a Valid Input")
            else:
                print("\nCongratulation! Right Answer ^_^ +{}\n\n".format(plus))
        else:
            if r==5 and n==5:
                Score = Score - neg
                print("\nWrong Answer :-( {}\nTry next Question ---->>".format(-neg))
                print("<<<ROUND {} COMPLETED>>>".format(r).center(165, " "))
                print("Total Score = {} ; Score Required to qualify the round= {}".format(Score, total_score // 2).center(165," "))
                if Score > (total_score//2):
                    print("You Qualified Final ROUND ^_^")
                    result="   Qualified  "+"/ Score: "+str(Score)
                else:
                    result="Not Qualified "+"/ Score: "+str(Score)
                    print("You Not Qualified Final ROUND")
            elif n==5:
                Score=Score-neg
                print("\nWrong Answer :-( {}\nTry next Question ---->>".format(-neg))
                print("<<<ROUND {} COMPLETED>>>".format(r).center(165," "))
                print("Total Score = {} ; Score Required to qualify the round= {}".format(Score,total_score//2).center(165," "))
                if Score<(total_score//2):
                    result="Not Qualified "+"/ Score: "+str(Score)
                    print("You not qualified ROUND {} ,Sorry You can't continue to ROUND {} ".format(r,r+1))
                    print("GAME OVER".center(170," "))
                    print("Thank you for playing , Better try next time (-_-)".center(170," "))
                    fail=1
                    break
                else:
                    result="   Qualified  "+"/ Score: "+str(Score)
                    while True:
                        print("You qualified ROUND {} ,Do You want to continue to ROUND {} ?".format(r,r+1))
                        exit = input("Yes or No ? ")
                        if exit == "no" or exit == "N" or exit == "No" or exit == "n" or exit == "NO":
                            print("GAME OVER".center(170, " "))
                            print("Thank you for playing , Better try next time -_-".center(170, " "))
                            quit()
                        elif exit == "Yes" or exit == "Y" or exit == "y" or exit == "yes" or exit == "YES":
                            break
                        else:
                            print("\nEnter a Valid Input")
            else:
                Score=Score-neg
                print("\nWrong Answer :-(  {}\nTry next Question ---->>\n\n".format(-neg))
        n=n+1
    results.append(result)
    n=1
    r=r+1
    neg=neg+1
    plus=plus+1
    total_score=total_score+25
    bonus=bonus+10
print("\n"*3)
print("==> RESULTS <==".center(170," "))
for b in range (0,r-1):
    print(("ROUND {} {} : ".format(b+1,round_name[b])+results[b]).center(170," "))
if Score>=100:
    print("OVERALL SCORE = {} :: SCORE REQUIRED TO WIN = 100".format(Score).center(170," "))
    print("\n")
    print("(^_^) CONGRATULATIONS YOU WON THIS QUIZ".center(170," "))
else:
    print("OVERALL SCORE = {} :: SCORE REQUIRED TO WIN = 100".format(Score).center(170," "))
    print("\n")
    print(":-^( SORRY YOU LOSE THIS QUIZ MATCH , BETTER TRY NEXT TIME".center(170," "))