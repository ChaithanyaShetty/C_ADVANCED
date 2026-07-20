Create the below structure with nested date data type for date of birth and  date of joining members.

struct student
{
int ID;
char name[50];
int marks[6];
struct date dob, doj;
float per;
char gender
};

1) Write a date comparison function to take two date variables as arguments and return 1/0 based on which date is older.

2) Create an array of structures for student, and write a function to take this array as argument and read data for all its elements. Verify if the given date of birth and date of joining are valid using a separate date validation function that takes the date as argument. if the date is not valid ask for another date.

3)  Write a print function to take this array as argument and print the data for all its elements.

4) Write a function to take the array of structures as argument, and print the name of the eldest student , using the date comparison function written above.

5) Write a swap function to swap two structure variables.

6) Sort the array in the order of their names  and print the data using the above print function.  make use of swap function to sort the structures.
