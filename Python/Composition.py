# def square(x):
#     x=x*x
#     return x
# def double(x):
#     x=x*2
#     return x
# num=int(input("num: "))
# print("double, squaring the value:",square(double(num)))

def compose(*functions):
    def inner (arg):
        for f in reversed(functions):
            arg=f(arg)
        return arg
    return inner
#Define three functions
def square(x):
    return x**2
def increment(x):
    return x+1
def half(x):
    return x/2
#call with 3 functions
composed=compose(square,increment,half)
print(composed(5))
composed=compose(square,increment(half(5)))
composed=compose(square,increment)
print(composed(5))
