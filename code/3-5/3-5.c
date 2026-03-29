#include <stdio.h>

void my_print(char type, void *x)
{
    switch (type)
    {
    case 'C':
        int *ch = (int *)x;
        printf("%c\n", *ch);
        break;
    case 'D':
        int *in = (int *)x;
        printf("%d\n", *in);
        break;
    case 'S':
        char *st = (char *)x;
        printf("%s\n", st);
        break;
    }
}

int main()
{
    int a = 0x61;
    char b = 'b';
    char *c = "hello world";

    my_print('C', &a);
    my_print('D', &b);
    my_print('S', c);
    my_print('C', c);

    return 0;
}