#include <stdio.h>

main()
{

  // Decr
  char c = 0;
  int year = 0;

  while (c != EOF) 
  {
    while ((c = getchar()) != '\n') 
    {
      year = year * 10;
      switch (c)
      {
        case '1': year += 1; break;
        case '2': year += 2; break;
        case '3': year += 3; break;
        case '4': year += 4; break;
        case '5': year += 5; break;
        case '6': year += 6; break;
        case '7': year += 7; break;
        case '8': year += 8; break;
        case '9': year += 9; break;
        case '0': year += 0; break;
        default: break;
      }
    }
    printf("%d\n", year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      printf("%d is a leap year\n", year);
    else
      printf("%d is not a leap year\n", year);
    year = 0;
  }
}
