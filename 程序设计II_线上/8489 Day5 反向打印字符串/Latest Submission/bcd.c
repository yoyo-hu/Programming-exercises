#include <string.h>
void reverse(char* stptr)
{
	for (int i = strlen(stptr) - 1; i >= 0; i--)
		printf("%c", stptr[i]);
}
