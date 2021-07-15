#include <stdio.h>
#include "btd.h" 

// 1111111111
int main()
{
    char binary[60]; 
    scanf("%s", binary);
    printf("%lld\n", BintoDec(binary));
    return 0;
}

