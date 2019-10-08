// RUN: %clangxx -O0 -g %s -o %t -lcrypt && %run %t

#include <assert.h>
#include <unistd.h>
#include <cstring>

int
main (int argc, char** argv)
{
  {
    char *p = crypt("abcdef", "xz");
    volatile size_t z = strlen(p);
  }
  {
    char *p = crypt("abcdef", "$1$");
    volatile size_t z = strlen(p);
  }
  {
    char *p = crypt("abcdef", "$5$");
    volatile size_t z = strlen(p);
  }
  {
    char *p = crypt("abcdef", "$6$");
    volatile size_t z = strlen(p);
  }
}
