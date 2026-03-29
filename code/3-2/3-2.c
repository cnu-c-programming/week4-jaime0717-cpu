#include <stdio.h>

void swap_endian(int *x)
{
    char *addr = (char *)x;
    char *r;

    for (int i = 0; i < 4; i++)
    {
        *(r + 3 - i) = *((addr + i));
        printf("%x\n", *(addr + i));
        printf("%x\n", *(r + 3 - i));
    }

    x = (int *)r;
}

int main()
{
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}