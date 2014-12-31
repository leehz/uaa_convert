#include <stdio.h>
#include <stdlib.h>

int checkSystem( )
{
    union check
    {
        int i;
        char ch;
        short int c;
    } c;
    c.i=0x11223344;
    printf("%x\n", c.c);
    printf("##%x\n", *((char *)&c.i+2));
    return c.ch;//(c.ch ==1);
}

int main(void)
{
    printf("%x\n",  checkSystem());
    return 0;
}

