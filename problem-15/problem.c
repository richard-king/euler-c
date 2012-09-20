#include <stdio.h>
#include <gmp.h>

#define N 20

int main(void)
{
	// 2N C N = ((2N)! / (N! * N!))

	mpz_t t, b;

	mpz_init(t);
	mpz_init(b);	

	mpz_fac_ui(t, 2 * N);
	mpz_fac_ui(b, N);

	mpz_mul(b, b, b);
	mpz_divexact(t, t, b);

	mpz_out_str(stdout, 10, t);
	printf("\n");	

	mpz_clear(t);
	mpz_clear(b);

	return 0;
}
