# Assignment-5
# Q)1

n = int(input("Enter the no. of terms: "))
while n <= 0:
    n = int(input("Enter the no. of terms: "))    
a = 0
b = 1
print(a, b, end = " ")
while n - 2:
    c = a + b
    print(c, end = " ")
    a = b
    b = c
    n -= 1
              
