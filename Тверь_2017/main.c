//Приведение типов
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Russian");
	int a=7, b;float g= 9.81,v;
	printf("a=%d; b=%d;\n",a,b);printf("g=%f; v=%f;\n",g,v);
	b = (int)g; //приводим значение 9.81 к типу int, получим 9
	v= (float)a; // приводим значение 7 к типу float, получим 7.0
	printf("После обертывания типа...\n");
	printf("a=%d; b=%d;\n",a,b);printf("g=%f; v=%f;\n",g,v);
	//int res = 0;res=getchar();
	return 0;
}
