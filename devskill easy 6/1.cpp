#include <stdio.h>

int main(void) {

	int T;
	double v,t;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%lf %lf", &v, &t);
		printf("%.2lf\n", -(v/t));
	}

	return 0;
}
