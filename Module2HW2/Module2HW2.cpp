#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>



void main()
{
	setlocale(LC_ALL, "Rus");

	int v = 0;
	printf("введите номер задачи:\t");
	scanf("%d", &v);

	if (v == 1) {
		/*1.	Даны два действительных числа.
		Вывести первое число, если оно больше второго, и оба числа, если это не так.*/
		float x, y;
		scanf("%f %f", &x, &y);
		if (x > y) {
			printf("%f", x);
		}
		else {
			printf("%f \n%f\n", x, y);
		}

	}
	else if (v == 2) {
		/* 2.	Даны два действительных числа. Заменить первое число нулем,
		если оно меньше или равно второму, и оставить числа без изменения в противном случае.*/

		float x, y;
		scanf("%f %f", &x, &y);
		if (x <= y) {
			x = 0;
			printf("x=%f \ny=%f\n", x, y);
		}
		else {
			printf("x=%f \ny=%f\n", x, y);
		}
	}
}