#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Russian");
	const double pi = 3.14;
	double V, r, h;
	printf("Введите значения r и h через пробел: ");
	scanf("%lg %lg", &r, &h);
	V = pi * r * r * h;
	printf("Объем бассейна равен %lg\n", V);
	return 0;
}
/*
Введите значения r и h через пробел: 4 3
Объем бассейна равен 150,72
Для продолжения нажмите любую клавишу . . .
*/