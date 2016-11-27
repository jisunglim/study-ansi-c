#include <stdio.h>

int namelen(const char[]);

main()
{
  // type and list of variables
  int lower, upper, step;
  char c, line[1000];

  // type and list
  int max;
  int min;
  char read;

  // A variable may also be initialized in its declaration.
  char name[] = "jisung";
  int age = 23;

  // The qualifier const
  const float pi_approx = 3.141592f;
  const float exp_approx = 2.71f;
  const char warn[] = "warning : ";

  printf("%s : %d\n", name, namelen(name));

}

// Application of the const declaration with function arguments
int namelen(const char name[])
{
  // Declaration
  int idx;

  // Initialize
  idx = 0;

  // Counting
  while (name[idx] != '\0')
    ++idx;

  // Test const qualifier
  // name[0] = '3';
  // > Compile error, expression must be modifiable lvalue.

  // Return
  return idx;
}
