#include <stdio.h>
#include <math.h>
//variant2
int main() {
	double x = 3.142, z = 0.543;

	double result;
	result = tan(sqrt(x)) + 165 * pow(z, 6) + sqrt(sqrt(pow(x, 2) - z));
	printf("%f", result);
	return 0;
}