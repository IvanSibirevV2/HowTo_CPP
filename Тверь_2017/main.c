#include <stdio.h>
#include <stdlib.h>
#define P 2
int main()
{
  system("chcp 1251");
  system("cls");
#if P==1
  printf("����������� ����� 1");
#elif P==2
  printf("����������� ����� 2, P=%d", P);
#else
  printf("����������� ������ �����, P=%d", P);
#endif
  getchar();
  return 0;
}
