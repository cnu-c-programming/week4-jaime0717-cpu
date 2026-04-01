#include <stdio.h>

void swap_endian(int *x)
{

    int y = *x;
    char *addr = (char *)x;
    char *r = (char*)&y;

    for (int i = 0; i < 4; i++)
    {
        *(r + 3 - i) = *((addr + i)); 
    }

    *x = *(int *)r;
}

int main()
{
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}