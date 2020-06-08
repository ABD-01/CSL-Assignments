# CSL-101-Assignment-2
### Problems and Solution on Assignment -2 of subject CP 2020

***Announcement date 02-04-2020***

***Due date: Submit online by 02:00 pm on Saturday 11th April 2020***

***No late submission will be allowed in any case for this particular assignment. Early submissions are
welcome.***

***No copying/sharing of code is allowed for the assignment. If any such case is identified, the original
author and person who has copied penalized equally and zero marks will be awarded.***

### *Click [here](https://github.com/ABD-01/CSL-101-Assignments/blob/docs/CP-Assignment-2.pdf) to view CP Assignment-2 problems.*

1. Write a program to calculate the value of nCr.
nCr is the number of ways of selecting
r items given n items. The recurrence for calculating nCr is given by:
nCr = n-1Cr + n1Cr-1
Assume that n >= r in this question. The program should make use of nCr_helper ( )
function.

2. Write a function that takes two positive integers n and k as input. Find the sum:
nC0 + nC1 + nC2 + nC3 + . . . + nCk.
The program should consist of two user-defined functions. One function to calculate
the sum of series which subsequently takes the help of fact_helper ( ) function. Do
not use math.h library functions.
3. Goldbach conjecture states that every even number greater than 2 can be expressed
as a sum of two primes. Given a number ‘N’ as input, write a program to check
whether the Goldbach conjecture holds for ‘N’, and print the corresponding two
primes adding to N. Use prime_helper ( ) function taken in class.
4. A Fibonacci prime series is a series made of those numbers in the Fibonacci series
which are prime. In main ( ), take an integer ‘n’ as the input and print n terms of
Fibonacci prime series. Use prime_helper ( ) function taken in class.
5. A number is said to be perfect if it is the sum of all its factors (except itself). For
example, 6 has factors 1, 2, 3 and 1 + 2 + 3 = 6, hence it is
perfect. Also, 28 = 1 + 2 + 4 + 7 + 14 is perfect. Write a C function checkPerfect ( )
which returns 1 if n is perfect number and 0 if it is not.
6. Given an integer n as input, print smallest number x such that x >= n and x is a
palindrome. You have done a question to find whether a number is a palindrome or
not in the previous assignment. Using the same logic, write a function
Palindrome_helper (int p) such that it returns whether a number p is a palindrome or
not?
Format:
int Palindrome_helper (int p)
{
// write your logic here
}
main ( )
{
/* Read n;
Call Palindrome_helper ( ) to check smallest number x such
that smallest x >= n and x is a palindrome */
}
7. Consider the Peasants' Algorithm for multiplication of two positive integers. It
works in the following manner:
• Write the two numbers in two columns. Keep updating according to the
following procedure until the number in the first (i.e., left) column becomes 1.
• Halve the number in the first column (integer division), double the number in
the second column.
• In the end, sum up all the numbers in the second column, for which, the
corresponding number in the first column is odd.
Example of multiplication using Peasants’ algorithm: 13 x 8:
13 8 ←
6 16
3 32 ←
1 64 ←
Answer: 64 + 32 + 8 = 104
Write a function to calculate multiplication using the Peasants’
algorithm.
8. Write a function to check if a given input number is a jumping number. A number is
called jumping number if all adjacent digits in it differ by 1. All single digits are
considered as jumping numbers. Some examples of jumping numbers are 0, 5, 10,
12, 78, 567, 101.
9. Write a program to compute F (x, y) where F (x, y) = F (x-y, y) + 1 if y
<= x and F (x, y) = 0 if x < y
10. Write a recursive function printNum ( ) that prints any given number by putting
spaces between successive characters to be printed. For example: printNum (12)
prints 1 2
printNum (327) prints 3 2 7
printNum (-912) prints – 9 1 2
11. Write a recursive function that returns a reverse of a number passed as a parameter.
12. Write a recursive function that returnsthe status (as 0 or 1) after checking the primarily
of a number.
13. Given a positive integer n and a digit d, return the count of the occurrences of the
digit d in the number n. For example, a count of 7 in 7177 yields 3. Use a recursive
function.
14. The Ackerman recursion can be described as below: A (0, n)
= n + 1
A (m + 1, 0) = A (m, 1)
A (m + 1, n + 1) = A (m, A (m + 1, n))
Given m and n as input, write a program to calculate A(m, n), using recursion.
15. The Taylor’s series for cos(x) is given as:
∞
(−1)
𝑛𝑥
2𝑛 𝑥
2 𝑥
4 𝑥
6
cos(x) = ∑ = 1 - + - +…
𝑛=0
(2𝑛)! 2! 4! 6!
The program to calculate cos(x) should use three recursive functions: float power
(float x, float n);
float fact (float n);
float cosine (float x, float n);
16. Write a program to swap the second smallest and second largest element in the array.
17. Given a sorted array of n numbers and another number x, determine whether or not there
exist two elements in the input array whose sum is exactly x. Try to write an iterative and
recursive solution both.
18. Write a program that places kth element of an array at position 1, the (k + 1) th element in
position 2, etc. The original 1st element is placed at (n – k + 1) and so on. The ‘k’ should
be user input.
19. Find all the peak elements in an array of integers. An element in an array is called a peak
element if it is greater than its adjacent neighbours. Assume that the array contains
multiple peak elements. The first and the last element of the array have only one adjacent
neighbor. For example:
A [ ] = {50, 80, 70, 90, 100, 80,50,20}, then peak elements are 80, 100.
A [ ] = {100, 80, 70, 90, 60, 65}, then peak elements are 100, 90, and 65.
20. Write a program that rearranges the elements of an array so that all those originally stored
at odd indices are placed before those at even indices. Consider the array index starts
from 1.
For example, the array
10 20 30 40 50 60 70 80
would be transformed to
10 30 50 70 20 40 60 80
21. Given a 1-D array, write a program that counts the number of even-spaced inversions in
the array. We call a pair (i, j) as an even-spaced inversion when both the following
conditions satisfy:
1. (i, j) is an inversion, which means arr [i] > arr [j] where i < j, and
2. the difference between i and j is even.
22. Given an array A [ ] of size n integers, create an another array output [ ] such that output
[i] is equal to the product of all elements of A except A [i]. For example, A [ ] = {1, 2, 3,
4, 5}, then output [ ] = {120, 60, 40, 30, 24}.
23. Given a sorted array A of integers of size N and two integers viz., left and right. Write a
recursive function to count the number of integers between left and right (inclusive of
both) present in array A. For example, A [ ] = {10, 20, 25, 30, 45, 50, 60, 80, 100}, left
= 30, and right = 70, then the output = 4.
24. Consider a 1-D array of integers 0’sand 1’s only. Write a C function takes as input an
array having n elements and then prints the length of the longest sequence of 1’s.
For example, if array is A [ ] = {0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1}, the length of
longest run of 1’s is 4 (underlined).
25.. Write a function that counts the number of unique numbers present in a 1-D array. For
example, for an array A [ ] = {1, 2, 3, 4, 5, 4, 3, 2} as input, the output is 5.
26. Write a function compact ( ) which takes as parameters an array of integers and its
length. The function should modify the array so that all consecutive occurrences of the
same integer are replaced by a single occurrence of that integer. The function should
return the length of this new array.
Example: When called with the array {1, 1, 1, 2, 2, 1, 2, 3, 3, 1, 1}, your function should
modify the array to {1, 2, 1, 2, 3, 1} and return 6.
27. Given an unsorted array A of size n that may contain duplicates and a number k < n,
write a function that returns “1” if an array contains at least one duplicate pair within a
distance of k, i.e. there exists i, j ϵ [0, n − 1] such that A [i] = A [j] and |i − j| < k.
28. Write a function that accepts as argument an array A of integers together with its size n
and a non-negative integer k. The function should create another array, which is
obtained by cyclically shifting the input array A by k positions to the right. For
example, if array A
= {2, 4, 6, 1, 3, 9, 5} of size n = 7 and k = 3, the function should create another array B
=
{3, 9, 5, 2, 4, 6, 1}.
29. Given a matrix of N*N order. Write a program to interchange the diagonals of the
matrix. For example, Input: { {1, 2, 3}, Output: { {3, 2, 1},
{4, 5, 6}, {4, 5, 6},
{7, 8, 9} } {9, 8, 7} }
Q0. Write a function to reverse the order of the elements in an M*N array of integers, so
that X [0][0] is now at X [M-1][N-1], X [0][1] is now at X [M-1][N-2], and so on.
Input: { {0, 1, 2, 3, 4}, Output: { {19, 18, 17, 16,
15},
{5, 6, 7, 8, 9}, {14, 13, 12, 11, 10},
{10, 11, 12, 13, 14}, {9, 8, 7, 6, 5},
{15, 16, 17, 18, 19} } {4, 3, 2, 1, 0} }
Solve the same problem using loops and recursion both.
31. Write a function that takes an input parameter a string, and returns the first nonrepeating character in it. For example, if the input string is “Malayalam”, then the
output should be ‘y’ and if the input string is “Telugu”, then the output should be ‘T’.
32. Write a function strend (s, t), which returns 1 if the string t occurs at the end of the string
s, and zero otherwise.
33. Write a program that encodes English-language word into pig-Latin. To translate an
English word into a pig-Latin word, place the first letter of the word at the end of the
word and add the letters “ay” at the end. For example: word “jump” becomes “umpjay”,
word “the” becomes “hetay” and the word “computer” becomes “omputercay”. Do not
use string.h library functions.
34. Write a program that finds out the initials of the words in a string, where a single blank
space separates two consecutive words in the string. For example, if the input string is
“Sacred Games”, the output will be “S.G.”.
35. Write a function squeeze (S1, S2) that deletes each character in the string S1 that matches
any character in the string S2.
