#include <stdio.h>

/* Program to print factorial of a number */

int Factor( int n)
{
	//will print 1 once the factorial of the number reaches that point.
	if(n == 0 || n == 1)
	return (1);

	else
	{
		return n * Factor(n-1);
	}
}

int main()
{
	int num = 20;
	printf("Factorial of %d is %d\n", num,  Factor(num-1));
	return(0);
	}

