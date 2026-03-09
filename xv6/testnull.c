#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  char *zero = "0";
  volatile int *p = (int*)atoi(zero); 

  printf(1, "testnull: starting... dereferencing address %d\n", p);

  printf(1, "Value is %d\n", *p);

  exit();
}