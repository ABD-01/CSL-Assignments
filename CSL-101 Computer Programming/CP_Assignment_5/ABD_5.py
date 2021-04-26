# Assignment-5
# Q)5


def fact(n):
    return 1 if (n == 1 or n == 0) else n * fact(n - 1)


n = int(input("Enter the number : "))
m = n
n1 = 0
while m > 0:
    r = m % 10
    n1 += fact(r)
    m //= 10
print("It is a Strong no.") if n == n1 else print("It is not a Strong no.")
