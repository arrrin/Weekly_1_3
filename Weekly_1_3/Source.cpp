#include<stdio.h>
int main()
{
	float a, b, c;
	scanf_s("%f %f %f", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0) {
		a *= a;
		b *= b;
		c *= c;
		if (a == (b + c))
		{
			printf("Yes");
		}
		else if (b == (a + c))
		{
			printf("Yes");
		}
		else if (c == (a + b))
		{
			printf("Yes");
		}
		else {
			printf("No");
		}

	}
	else {
		printf("No");
	}
	return 0;
}