#include <stdio.h>

int main(void)
{
	unsigned int i, j;
	unsigned long sum = 0;

	int and = 3;
	int hundred = 7;
	int thousand = 8;

	int ones[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
	int teens[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
	int tens[] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};

	sum += ones[1] + thousand;
	sum += teens[0];

	for(i = 1; i < 10; ++i)
	{
		sum += ones[i];
		sum += teens[i];
	}

	for(i = 20; i < 100; ++i)
	{		
		sum += tens[i / 10] + ones[i % 10];
	}

	for(i = 1; i < 10; ++i)
	{
		int curr = ones[i] + hundred;
		
		sum += curr;

		curr += and;

		sum += curr + teens[0];		

		for(j = 1; j < 10; ++j)
		{
			sum += curr + ones[j];
			sum += curr + teens[j];
		}

		for(j = 20; j < 100; ++j)
		{
			sum += curr + tens[j/10] + ones[j % 10];
		}
	}
	
	printf("%lu\n", sum);
}
