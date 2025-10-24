from enum import Enum

class Divisibility(Enum):
    EVEN = 0,
    ODD = 1

def check_divisibilty(x: int) -> Divisibility:
    if (x%2 == 0):
        return Divisibility.EVEN
    else:
        return Divisibility.ODD
    
result = check_divisibilty(8489437997493749734)
if (result == Divisibility.EVEN):
    print("even")
else:
    print("odd")
