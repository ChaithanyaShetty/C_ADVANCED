
ASSIGNMENT ON DMA(29-06-2023 - 16-06-2026)

1)  Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers.  
Assume that the input arrays are sorted and may not be of same sizes create all three arrays dynamically. resize the merged array to remove the extra unused elements.

eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20

2) Implement your own realloc function using malloc and free using below steps: 
- Allocate memory for new size using malloc
- copy data from old address to new address
- release the old address
- return the new address

3) Write a program to read  n number of strings from a user and print which string is the smallest of all ( in string comparison, smallest string means that should come the first in dictionary sorting order). Create the strings dynamically and read the data.

4) read a set of numbers from the user, and convert each integer to string using itoa function that you have written already yesterday, and print the numeric string in calling function in the same loop.  
5)  "Write a trim() function,that will remove the leading and trailing spaces from a string and resize it to the required space.
eg., Input : ""    str  str   ""
Output : ""str str"""

6) Write a string concatenation function that calculates the source string length, accordingly adjusts the size of destination string before concatenating the strings, to avoid size issues. For this the destination must be allocated dynamically in calling function.

7) read a set of words from the user and concatenate all of them to make a sentence and print it back using the concatenation function above with spaces as delimiters and fullstop as end of the sentence.

input: 
Kernel
Masters
is
India's
leading
training
institute.

output: Kernel Masters is India's leading training institute.

eg., input : kernel  e   xxx

output: kxxxrnxxxl"

8) Read a set of strings in a loop , create every string dynamically based on the given string's length (first read the string into an array, calculate its length and using that allocated memory dynamically, and copy the string from array to dyanmic memory). Sort the strings in descending order and print.

