#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Russian");
	int a=7, b=2, res = 0;
	res = a+b; printf("%d + %d = %d\n",a,b,res);
	res = a-b; printf("%d - %d = %d\n",a,b,res);
	res = a*b; printf("%d * %d = %d\n",a,b,res);
	res = a/b; printf("%d / %d = %d\n",a,b,res);
	res = a%b; printf("%d %% %d = %d\n",a,b,res);
	res=getchar();
	return 0;
}
/*
7 + 2 = 9
7 - 2 = 5
7 * 2 = 14
7 / 2 = 3
7 % 2 = 1
Что то такм про нажатие клавиши....
*/