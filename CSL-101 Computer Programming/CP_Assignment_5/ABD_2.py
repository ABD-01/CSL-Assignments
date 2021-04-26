# Assignment-5
# Q)2

n = int(input("Enter the number : "))
if n < 0:
    print('-', end="")
    n *= -1
print(str(n)[::-1])
