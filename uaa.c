#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
    int a;
    if( argc != 3 )
    {
        printf("usage: %s <number>\n", argv[0]);
    }
    else
    {
        if(0 != (a = strtol(argv[1], NULL, atoi(argv[2]))))
            printf("%d\t%c\n", a, a);
    }
}
