#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *eratosthenes;
	unsigned i, j;
	unsigned long sum = 0;
	size_t max = 2000000;

	eratosthenes = calloc(max, sizeof *eratosthenes);
	for(i = 2; i < max; ++i)
	{
		if(!eratosthenes[i])
		{
			sum += i;
			for (j = i * 2; j < max; j += i)
			{
				eratosthenes[j] = 1;
			}
		}
	}

	printf("%lu\n", sum);

	return 0;
}
