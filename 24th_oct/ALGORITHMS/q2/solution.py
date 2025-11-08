def prime_num(x)-> int:
    for i in range(2,x//2):
        if (x%i == 0):
            return False
    return True

result = prime_num(10)
print(result)
