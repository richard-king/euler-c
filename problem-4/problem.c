#include <stdio.h>

static int is_palindrome(unsigned int num);

int main(void)
{
	unsigned int i, j, max = 0;
	for(i = 999; i > 99; --i)
	{
		for(j = 999; j > 99; --j)
		{
			if((i * j) > max && is_palindrome(i * j))
			{
				max = i * j;
			}
		}
	}
	printf("%u\n", max);
	return 0;
}

int is_palindrome(unsigned int num)
{
	unsigned int reverse = 0;
	unsigned int tmp = num;

	while(tmp)
	{
		reverse = 10 * reverse + (tmp % 10);
		tmp /= 10;
	}
	return reverse == num;
}
