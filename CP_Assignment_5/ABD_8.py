# Assignment-5
# Q)8

n = int(input("Enter the number : "))
print(n, end=" ")
while n != 1:
    if n % 2:
        n = (3 * n) + 1
    else:
        n = n // 2
    print(n, end=" ")
print()
