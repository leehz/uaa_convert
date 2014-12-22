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
    else if (!strcmp(argv[1], "0"))
    {
        printf("00000000\t0x0\t00\n");
    } else
    {
        if(0 < (a = atoi(argv[1])))
        {       for (i = 8*sizeof(char)-1; i >= 0; --i)
                {
                if ((a >> i) & 0x01) 
                putchar('1');
                else 
                putchar('0');
                }
        printf("\t0x%x\t0%o", a, a);
        }
                else
                {
                p = argv[1];
                while(*p)
                {
                a = *p++;
                for (i = 8*sizeof(char)-1; i >= 0; --i)
                {
                if ((a >> i) & 0x01) putchar('1');
                else putchar('0');
                }
        printf("\t0x%x\t0%o", a, a);
                putchar('\n');
                }
                }
        putchar('\n');
    }
}
