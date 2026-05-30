/*2) Need to display different welcome messages depending on the operating system. 
  Define the macro from gcc command. Implement a error incase the macro is not defined from gcc.

  for WINDOWS : Microsoft Windows Welcomes you
  for Linux : Linux Welcomes you
  for Mac : Mac Welcomes you"

In this program, the operating system is selected using a macro passed from the gcc command line. The `-D` option is used to define a macro during compilation, for example `-DOS=1` acts as `#define OS 1`. The program checks whether the macro is defined using `#ifndef OS`. If the macro is not provided, the preprocessor generates a compile-time error using `#error` and stops compilation. Depending on the value of `OS`, the program displays the appropriate welcome message for Windows, Linux, or Mac.


*/

#include<stdio.h>
//#define OS
#ifndef OS 
#error define OS
#endif
int main(int argc, char*argv[])
{
#if OS==1 
	printf("\nMicrosoft Windows Welcomes you");
#elif OS==2 
	printf("\nMicrosoft Windows Welcomes you");
#elif OS==3
	printf("\nMicrosoft Windows Welcomes you");
#else
	printf("\nNot valid OS");
#endif

}

