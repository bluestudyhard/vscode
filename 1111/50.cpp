#include <stdio.h> //直到最后一项不大于eps
int main()
{
	double eps;
	scanf("%lf", &eps);
	double sum = 0.0;
	double sum1 = 1.0;
	double isprime = 1.0;
	int n = 1;
	while (1.0 / sum1 >= eps)
	{
		sum1 = 1.0 * (3 * n - 2);
		sum = sum + isprime / sum1;
		isprime = -isprime;
		n++;
		if (1.0 / sum1 <= eps)
			break;
	}
	printf("sum = %.6f", sum);
	return 0;
}