#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Russian");

	int a=7;
	printf("a=%d;\n",a);
	int res = 0;res=getchar();
	return 0;
}
/*
a=7; b=4199400;
g=9,810000; v=0,000000;
После обертывания типа...
a=7; b=9;
g=9,810000; v=7,000000;
Что то такм про нажатие клавиши....
*/