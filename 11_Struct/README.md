
ASSIGNMENT ON STRUCTURES (05-07-2023 - 15-07-2026)

Make use of header file properly in all assignments.

1) Practice scanf and printf on each member of the structure using a structure variable  using the below structure template:

struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};
create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.


2) Create an array of structures using above template. read the data for all elements of the array. and print the topper name with highest percentage. 

3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.


4) write a function to take the array of structures as an argument and return the structure element with oldest date of birth.

return the structure variable using return statement and array element with index. Return type of the function will be struct student. When you return a structure ,its copy will be returned from function, we can assign it to another structure variable at function call.

eg.,struct student oldeststudent(struct student arr[])
{ 

return arr[i]; // find the index at which date of  birth is oldest using date comparison function
}

5) Write a function to take an array of structures as argument, and convert all their names into capital letters( strupr implementation). print the data in main function.

6) Count and print how many girls and how many boys are there in the class using an array of structures, send girls and boys count as output from function using call by reference.

