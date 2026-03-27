#include <stdio.h>

void swap_endian(int *x) {
   char* addr = (char)x;
   char* addr2 = addr;

    for (int i = 0; i<4;i++) {
        addr2=addr+3-i;
    }

    x=addr2;
}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}