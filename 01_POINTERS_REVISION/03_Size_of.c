#include<stdio.h>

int main()
{
	int *a;
	float *b;
	char *c;
	double *d;

	printf("Pointer Sizes:\n");

	printf("sizeof(int *)    = %lu\n", sizeof(a));
	printf("sizeof(float *)  = %lu\n", sizeof(b));
	printf("sizeof(char *)   = %lu\n", sizeof(c));
	printf("sizeof(double *) = %lu\n", sizeof(d));

	printf("\nSizes using indirection operator:\n");

	printf("sizeof(*a) = %lu\n", sizeof(*a));
	printf("sizeof(*b) = %lu\n", sizeof(*b));
	printf("sizeof(*c) = %lu\n", sizeof(*c));
	printf("sizeof(*d) = %lu\n", sizeof(*d));

	return 0;
}
