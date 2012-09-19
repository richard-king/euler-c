#include <stdio.h>

int main(void)
{
	int x = 1;
	int y = 2;
	int z = 0;
	int sum = y;

	do
	{
		z = x + y;
		if(z % 2 == 0) { sum += z; }
		x = y;
		y = z;
	}	
	while(y < 4000000);
	printf("%i\n", sum);
	return 0;
}
