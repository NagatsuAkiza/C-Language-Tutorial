#include <stdio.h>

void main()
{
  int a, b, c;
  printf("masukkan sebuah bilangan :");
  scanf("%i", &a);
  b = a * a;
  c = a * a * a;
  printf("pangkat 2 = %i\n", b);
  printf("pangkat 3 = %i", c);
}
