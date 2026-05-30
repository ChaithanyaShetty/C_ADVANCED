/*1)  Need to display different welcome messages depending on the operating system. 
  Define the macro inside the code and compile the following into 3 different executables.
  for WINDOWS : Microsoft Windows Welcomes you
  for Linux : Linux Welcomes you
  for Mac : Mac Welcomes you"*/

#include<stdio.h>

int main()
{
#if OS==1
	printf("\nMicrosoft Windows Welcomes you");
#elif OS==2
	printf("\nLinux Welcomes you");
#elif OS==3
	printf("\nMac Welcomes you");
#else
	printf("\nNot valid OS");
#endif

}
