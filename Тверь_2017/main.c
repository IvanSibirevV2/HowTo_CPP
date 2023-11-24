#include <stdio.h>
#include <stdlib.h>
#define P 2
int main()
{
  system("chcp 1251");
  system("cls");
#if P==1
  printf("Выполняется ветка 1");
#elif P==2
  printf("Выполняется ветка 2, P=%d", P);
#else
  printf("Выполняется другая ветка, P=%d", P);
#endif
  getchar();
  return 0;
}
