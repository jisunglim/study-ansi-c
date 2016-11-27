#include <stdio.h>

int mystrlen(char s[]);

int main(void)
{
  int emptystr;
  int longstr;

  emptystr = mystrlen("");

  longstr = mystrlen("abcdefghijklmnopqrstuvwxyz");

  printf("empty : %d, long : %d\n", emptystr, longstr);
}

int mystrlen(char s[])
{
  int cnt = 0;

  while (s[cnt])
    cnt++;

  return cnt;
  // for (cnt = 0; s[cnt] != '\0'; ++cnt)
  
}
