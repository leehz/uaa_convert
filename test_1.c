#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    c = 1;
    int i = 8*sizeof(char);
    for(; i >= 0; i--)
    {
        if((c>>i) & 0x01)
            putchar('1');
        else {
            putchar('0');
        }
    }
    printf("\n");
    return 0;
}
