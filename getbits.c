#include <stdio.h>

unsigned getbits(unsigned, int, int);
unsigned getdigits(unsigned x, int p, int n);

main()
{
  unsigned ui = 63U;
  unsigned ui2 = 123512u;

  printf("%d : %d\n", ui, getbits(ui, 5, 3));
  printf("%d : %d\n", ui2, getdigits(ui2, 3, 3));
}

/* get bits : get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
  return ((x >> (p + 1 - n)) & ~(~0 << n));
}

unsigned getdigits(unsigned x, int p ,int n)
{
  int i;
  int dex = 1;
  int dex2 = 1;

  for (i = 0; i < p; ++i)
    dex *= 10;
  
  for (i = 0; i < n; ++i)
    dex2 *= 10;
   

  return (x / dex) - (x/dex)/dex2*dex2;
}
