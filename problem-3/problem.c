#include <stdio.h>
#include <math.h>

int main(void)
{
	long evil = 600851475143;

	int i;

	for(i = 2; i < floor(sqrt(evil)); ++i)
	{
		if(evil % i == 0)
		{
			evil = (evil / i);
		}
	}

	printf("%li\n", evil);

	return 0;
}
