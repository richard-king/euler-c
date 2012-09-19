#include <stdio.h>

static unsigned num_divisors(unsigned long num);

int main(void)
{	
	unsigned long i = 1, j = 1;
	while(num_divisors(j) < 500)
	{
		j += ++i;
	}

	printf("%lu\n", j);

	return 0;
}

unsigned num_divisors(unsigned long num)
{
	unsigned long y;
	unsigned count = 1;

	for(y = 2; y <= num; ++y)
	{
		unsigned tmp = 0;
		while(num % y == 0)
		{
			++tmp;
			num /= y;	
		}
		count *= tmp + 1;
	}

	return count;
}
