#include <stdio.h>

int main(void)
{
	unsigned int a, b;
	for(a = 1; a < 333; ++a)
	{
		for(b = a + 1; b < 666 - a; ++b)
		{
			if( (a * a) + (b * b) == ( (1000 - (a + b)) * (1000 - (a + b)) ) )
				printf("%u\n", (a * b * (1000 - (a + b))));
		}
	}
	return 0;
}
