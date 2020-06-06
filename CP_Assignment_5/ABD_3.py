# Assignment-5
# Q)3

n = int(input("Enter the number : "))
m = n
n1 = 0
while m > 0:
    r = m % 10
    n1 = (n1 * 10) + r
    m //= 10
if n == n1:
    print('It is a palindrome')
else:
    print('It is not a palindrome')
