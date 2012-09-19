#include <stdio.h>

int main(void)
{
	unsigned long sum_squares = 0;
	unsigned long square_sum = 0;

	int i;

	for(i = 1; i < 101; ++i)
	{
		sum_squares += i * i;
		square_sum += i;
	}

	square_sum *= square_sum;

	if(sum_squares > square_sum)
	{
		printf("%lu\n", (sum_squares - square_sum));
	}
	else
	{
		printf("%lu\n", (square_sum - sum_squares));
	}
	return 0;
}
