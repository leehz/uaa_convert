#include<stdio.h>
#include<stdlib.h>
#include<sys/ioctl.h>
#include<errno.h>
int kbhit(){
    int i;
    if(ioctl(0,FIONREAD,&i)<0){
        printf("ioctl failed, error=%d\n ",errno);
        exit(1);
    }
    return i;
}
main(){
    int i=0;
    int c=' ';
    system("stty raw -echo" );
    printf("enter 'q' to quit \n" );
    for(;c!='q';++i){
        if(kbhit()){
            c=getchar();
            printf("\n got %c, on iteration %d\n",c,i);
        }
    }
    system("stty cooked echo" );
    return 0;
}
