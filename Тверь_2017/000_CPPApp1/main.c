#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Russian");

	int a=7, b;
	float g= 9.81,v;
	printf("a=%d; b=%d;\n",a,b);
	printf("g=%f; v=%f;\n",g,v);
	b = (int)g; //�������� �������� 9.81 � ���� int, ������� 9
	v= (float)a; // �������� �������� 7 � ���� float, ������� 7.0
	printf("����� ����������� ����...\n");
	printf("a=%d; b=%d;\n",a,b);
	printf("g=%f; v=%f;\n",g,v);
	
	int res = 0;
	res=getchar();
	return 0;
}
/*
a=7; b=4199400;
g=9,810000; v=0,000000;
����� ����������� ����...
a=7; b=9;
g=9,810000; v=7,000000;
��� �� ���� ��� ������� �������....
*/