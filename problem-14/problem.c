#include <stdio.h>

static unsigned long collatz(unsigned start);

int main(void)
{
	unsigned i;
	unsigned long max = 3;
	unsigned max_start = 1;
	
	for(i = 2; i < 1000000; ++i)
	{
		unsigned long tmp = collatz(i);
		if(tmp > max)
		{
			max_start = i;
			max = tmp;	
		}
	}

	printf("%u\n", max_start);

	return 0;
}

unsigned long collatz(unsigned start)
{
	unsigned val = start;
	unsigned long count = 0;

	while(val > 1)
	{
		count++;
		val = (val % 2 == 0) ? val/2 : 3 * val + 1;	
	}

	return count;
}
