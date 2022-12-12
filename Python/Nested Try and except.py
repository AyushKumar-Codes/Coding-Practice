try:
    print("outer try block")
    print(2+3)
    try:
        print("Inner try block")
        print(2/0)
    except ZeroDivisionError:
        print("Inner except block")
    finally:
        print("Inner finally block")
except:
   print("Outer except block")
finally:
    print("outer finally block")