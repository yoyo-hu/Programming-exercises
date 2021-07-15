#include <cstdio>

#include "my_memmove.hpp"
#include "ban_string.h"

int main() {
  char buf[32] = {};
  scanf("%31s", buf);

  int src_offset = 0, dst_offset = 0, copy_size = 0;
  scanf("%d%d%d", &src_offset, &dst_offset, &copy_size);

  my_memmove(buf + dst_offset, buf + src_offset, copy_size);

  printf("%-31s\n", buf);

  return 0;
}