def comparing(a,b,c) -> int:
    if (a>b and a>c):
        return a
    elif (b>a and b>c):
        return b
    else:
        return c

x = int(input("Enter first number"))
y = int(input("Enter second number"))
z = int(input("Enter third number"))

result = comparing(x,y,z)
print(result)