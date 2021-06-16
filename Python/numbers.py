x = 1      # int
y = 2.8    # float
z = 1j     # complex

print(type(x))
print(type(y))
print(type(z))


# integers
x = 1
y = 35656222236367221
z = -325674376

print(type(x))
print(type(y))
print(type(z))



# floats
x = 35e3
y = 12E4
z = -87.7e100

print(type(x))
print(type(y))
print(type(z))



# Complex
x = 3+5j
y = 5j
z = -5j

print(type(x))
print(type(y))
print(type(z))


# Convert
x = 1    # int
y = 2.8  # float
z = 1j   # complex

#convert from int to float:
a = float(x)

#convert from float to int:
b = int(y)

#convert from int to complex:
c = complex(x)

print(a)
print(b)
print(c)

print(type(a))
print(type(b))
print(type(c))


# Random Number
import random
print(random.randrange(1,10))