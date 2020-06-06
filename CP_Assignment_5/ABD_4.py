# Assignment-5
# Q)4

n1 = int(input("Enter the 1st number : "))
n2 = int(input("Enter the 2nd number : "))
for i in range(n2, (n1 * n2) + 1):
    if not i % n1 and not i % n2:
        print(f"\n{i} is the LCM of {n1} and {n2}.")
        break
