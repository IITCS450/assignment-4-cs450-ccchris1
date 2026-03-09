#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "testkaccess: starting... trying to read kernel memory\n");

  // 0x80000000 is KERNBASE (the start of kernel memory)
  volatile int *p = (int*)0x80000000;

  // This should trigger the page fault diagnostic (but NOT the NULL label)
  printf(1, "The value is: %d\n", *p);

  printf(1, "testkaccess ERROR: I should have been killed!\n");
  exit();
}