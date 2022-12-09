#include <stdio.h>
/**
 * main - Entry point
I*
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	strand(time(0));
	n= rand() - RAND_MAX /2;
if (n < 0)
	printf(“%d is negativve\n”, n);
elseif (n == 0) 
	printf(%d is zero\n”, n);
else
	printf(%d is positive\n”, n);
return (0);
}
