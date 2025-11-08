#TC : O(n)
#SC : O(1)
# for loop method 
def factorial(x)-> int:
    result = 1      # use 1 because anything multiplied by 0 is 0
    for i in range(x,0,-1):
        result = result*i
       # print("Debug",i)
    return result

def fact_recursive(x)-> int:
    if x==1:
        return 1
    return x*fact_recursive(x-1)

result = fact_recursive(5)
print(result)