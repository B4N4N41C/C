#include <stdio.h>

int main()
{
		float fahr, celsius;
		int lower, upper, step;

		lower = -20; /* нижняя граница таблицы температур */
		upper = 20; /* верхняя граница */
		step = 1; /* шаг */

		celsius = lower;
		printf ("fahr\tcelsius \n");
		while (celsius <= upper) {
			fahr = ((9.0/5.0) * celsius) + 32.0;
			printf ("%3.1f\t%6.1f\n", fahr, celsius);
			celsius = celsius + step;
		}
		return 0;
}
