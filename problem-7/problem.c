#include <stdio.h>
#include <math.h>

static int is_prime(unsigned int ui);

int main(void)
{
	unsigned int curr;
	unsigned int count = 1;

	for(curr = 3; ; curr += 2)
	{
		if(is_prime(curr) == 1)
		{
			count++;
		}

		if(count == 10001)
		{
			printf("%i\n", curr);
			return 0;
		}
	}

	return -1;
}

int is_prime(unsigned int ui)
{
	long i;
	for(i = 3; i < sqrt(ui) + 1;i +=2)
	{
		if(ui % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

