#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    union test{
        int a;
        char s;
    }t;
    t.a = 1000;
    printf("%d\t%x\n", t.s, t.s);
    printf("%x\n", *((char *)&t.a+1));

}
