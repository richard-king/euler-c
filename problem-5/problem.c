#include <stdio.h>

static unsigned long gcd(unsigned long a, unsigned long b);
static unsigned long lcm(unsigned long a, unsigned long b);

int main(void)
{
	unsigned long answer = 1;
	unsigned long i;

	for(i = 1; i < 21; ++i)
	{
		answer = lcm(answer, i);
	}

	printf("%lu\n", answer);
	return 0;
}

unsigned long gcd(unsigned long a, unsigned long b)
{
	unsigned long holder;
	
	if(a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}

	while(holder = a%b)
	{
		a = b;
		b = holder;
	}

	return b;
}

unsigned long lcm(unsigned long a, unsigned long b)
{
	unsigned long long x = (unsigned long long)a * b;
	return x/gcd(a, b);
}
