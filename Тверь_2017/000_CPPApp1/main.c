#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Russian");
	const double pi = 3.14;
	double V, r, h;
	printf("������� �������� r � h ����� ������: ");
	scanf("%lg %lg", &r, &h);
	V = pi * r * r * h;
	printf("����� �������� ����� %lg\n", V);
	return 0;
}
/*
������� �������� r � h ����� ������: 4 3
����� �������� ����� 150,72
��� ����������� ������� ����� ������� . . .
*/