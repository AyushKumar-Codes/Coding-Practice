globvar="Hello"
def test1():
    global globvar
    globvar ="Good Morning"
def test2():
    globvar="Good Evening"
print(globvar)
test1()
test2()
print(globvar)

globvar="Hello"
def test1():
    # global globvar
    globvar ="Good Morning"
def test2():
    globvar="Good Evening"
print(globvar)
test1()
test2()
print(globvar)

globvar="Hello"
def test1():
    # global globvar
    globvar ="Good Morning"
def test2():
    global globvar
    globvar="Good Evening"
print(globvar)
test1()
test2()
print(globvar)

a=int(input("a: "))
def chg():
    global a
    a=200