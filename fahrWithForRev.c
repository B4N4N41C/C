#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цульсию в обратном порядке*/
#define LOWER 0 /* нижния граница таблицы */
#define UPPER 300 /* верхняя граница */
#define STEP 20 /* размер шага */

int main()
{
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
			printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	return 0;
}	
