#include "indexOf.h"
#include <string.h>
int indexOf(const char *s1, const char *s2) {
  const char *p = strstr(s2, s1);
  if (p)
    return p - s2;
  else
    return -1;
}