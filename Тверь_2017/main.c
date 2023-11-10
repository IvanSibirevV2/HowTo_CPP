#include <stdio.h>
//Шаблонизация макросом
#define SUM(x,y) (a##x + a##y)
int main()
{
  int a1 = 5, a2 = 3;
  printf("%d", SUM(1, 2)); // (a1 + a2)
  getchar();
  return 0;
}
