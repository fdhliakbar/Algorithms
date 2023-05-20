import math

def isPrime(n):
    if n <= 1:
        return False
    
    sqrtN = int(math.sqrt(n))
    for i in range(2, sqrtN + 1):
        if n % i == 0:
            return False
    
    return True

def processArrayValues(values):
    for value in values:
        isValuePrime = isPrime(value)
        
        print(f"Nilai: {value} adalah", end=" ")
        if isValuePrime:
            print("bilangan prima.")
        else:
            print("bukan bilangan prima.")

values = [2, 7, 11, 15]
processArrayValues(values)
