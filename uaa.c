#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a;
    int i = 0;
    char *p;
    if( argc != 2 )
    {
        printf("usage: %s <number>\n", argv[0]);
    }
    else
    {
        if(0 != (a = strtol(argv[1], NULL, 2)))
            printf("%d\t%c\n", a, a);
    }
}
