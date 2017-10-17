#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double population = 6763;
	double rate = 0.0118;
	double newPop = population;
	double newPop2 = population;
	double y;
	int year;
	int i;

	printf("%15s%30s%25s\n", "Years from now", "Population (in millions)", "Increase (in millions)");

	for (year = 1; year <= 75; year++)
	{
		y = 1;
		newPop2 = newPop;
		for (i = 1; i <= year; i++)
		{
			y = y * (1+rate);
		}
		newPop = population * y;
		printf("%15d%30.2f%25.2f\n", year, newPop, newPop - newPop2);
	}

	system("pause");
	return 0;
}