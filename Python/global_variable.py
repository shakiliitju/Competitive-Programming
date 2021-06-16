
# Create a variable outside of a function
x = "awesome"

def myfunc():
    print("Python is "+x)

myfunc()



# Create a variable inside a function
x = "awesome"

def myfunc():
    x = "fantastic"
    print("Python is " +x)

myfunc()

print("Python is " +x)



# golobal ketword
def myfunc():
    global x
    x = "fantastic"

myfunc()
print("Python is " +x)


# global variable inside a function
x = "awesome"

def myfunc():
    global x
    x = "fantastic"

myfunc()

print("Python is " +x)