# Selesaikan persolana pengurutan untuk
# S = [15,4,8,11,2,10,19], N = 7

def bubbleSort(S, N):
    for i in range(N):
        for j in range(0, N - i - 1):
            if (S[j] > S[j+1]):
                S[j], S[j+1] = S[j+1], S[j]


S = [15, 4, 8, 11, 2, 10, 19]
N = 7

bubbleSort(S, N)

print("Results: ")
for i in range(N):
    print("%d" % S[i])
