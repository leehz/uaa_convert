#include <stdio.h>
#include <stdlib.h>

void test(void)
{
    printf("test\n");
exit(-1);

}
int main(void)
{
    test();
    printf("main\n");
    return 0;


}
