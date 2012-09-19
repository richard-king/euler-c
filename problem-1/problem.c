#include <stdio.h>

int main(void)
{
	int sum3 = 0;
	int sum5 = 0;
	int sum15 = 0;
	
	int i;
	for(i = 0; i < 1000; i += 3)
	{
		sum3 += i;
	}
	for(i = 0; i < 1000; i += 5)
        {
                sum5 += i;
        }
        for(i = 0; i < 1000; i += 15)
        {
                sum15 += i;
        }

	printf("%i + %i - %i = %i\n", sum3, sum5, sum15, (sum3 + sum5 - sum15));

	return 0;
}
