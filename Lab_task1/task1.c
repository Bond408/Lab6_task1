#include <stdio.h>
#include <locale.h>
int main(void) {

	setlocale(LC_ALL, "RUS");
	int year;
	printf("Введите год\n");
	scanf_s("%d", &year);
	if (((year % 4 == 0) & (year % 100 != 0)) || year % 400 == 0) printf("Год %d високосный", year);
	else printf("Год %d не високосный", year);



}