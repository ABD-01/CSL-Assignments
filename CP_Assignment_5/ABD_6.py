# Assignment-5
# Q)6


def sumofdiv(a):
    sum = 0
    for i in range(1, a):
        if not a % i:
            sum += i
    return sum


num1 = int(input("Enter the 1st number : "))
num2 = int(input("Enter the 2nd number : "))
if num1 == sumofdiv(num2) and num2 == sumofdiv(num1):
    print(f"{num1} and {num2} are Amicable Numbers.")
else:
    print(f"{num1} and {num2} are NOT Amicable Numbers.")
