//Приведение типов
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Russian");float a=0;
	a=-1.4;printf("fabs(%lg)=%lg;\n",a,fabs(a));
	a=4;printf("sqrt(%lg)=%lg;\n",a,sqrt(a));
	a=M_PI;printf("M_PI=%lg;\n",a);
	a=M_PI;printf("sin(%lg)=%lg; (В радианах)\n",a,sin(a));
	a=M_PI;printf("cos(%lg)=%lg; (В радианах)\n",a,cos(a));
	a=4;printf("pow(%lg, 2)=%lg; (4^2)\n",a,pow(a, 2));
	a=1;printf("exp(%lg)=%lg;\n",a,exp(a));
	a=4;printf("log(%lg)=%lg; (натуральный логарифм числа по основанию экспоненты)\n",a,log(a));
	a=4;printf("log10(%lg)=%lg; (десятичный логарифм числа по основанию экспоненты)\n",a,log10(a));
    int res = 0;res=getchar();
	return 0;
}
