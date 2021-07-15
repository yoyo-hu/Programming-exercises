// #include <string.h>
char* my_memmove(char *dst, const char *src, unsigned int n) {
  if (!(dst && src)) return nullptr;
  char *ret = dst;
  // check overlap
  unsigned int distance = dst - src;
  if (distance > 0 && distance < n) {
    dst += n - 1;
    src += n - 1;
    for (int i = 0; i < n; ++i) {
      *dst = *src;
      --dst;
      --src;
    }
  } else {
    for (int i = 0; i < n; ++i) {
      *dst = *src;
      ++dst;
      ++src;
    }
  }
  return ret;
}