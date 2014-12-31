#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int x;
    char x0,x1;
    x=0x1122;

    x0=*((char*)&x); //低地址单元 ,或者((char*)&x)[0];
    x1=*((char*)&x + 1); //高地址单元,或者((char*)&x)[1];
    printf("%d\n", sizeof(short int));
    printf("%d\n", sizeof(short));
    printf("x0=%x\nx1=%x\n",x0,x1);
}
