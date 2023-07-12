def calculateFactorial(N):
    if (N == 0):
        return 1
    else:
        return N * calculateFactorial(N - 1)


result = calculateFactorial(5)
print(result)
