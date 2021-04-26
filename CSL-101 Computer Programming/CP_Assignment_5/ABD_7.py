# Assignment-5
# Q)7

from math import sqrt

n1 = (5 * (int(input("Enter the number : ")) ** 2)) + 4
n2 = n1 - 8
if int(sqrt(n1)) ** 2 == n1 or int(sqrt(n2)) ** 2 == n2:
    print("It is a Fibonacci Number.")
else:
    print("It is Not a Fibonacci Number.")
