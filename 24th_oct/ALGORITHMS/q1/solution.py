#TC : O(n)
#SC : O(1)
# for loop method 
def factorial(x)-> int:
    result = 1      # use 1 because anything multiplied by 0 is 0
    for i in range(x,0,-1):
        result = result*i
       # print("Debug",i)
    return result

result = factorial(100000)
print(result)