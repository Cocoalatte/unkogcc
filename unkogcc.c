#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc,char *argv[]){
        printf("unkogcc V0.0.1\n");

        if(argv[1] == NULL){
                printf("\x1b[1m");
                printf("\x1b[7m");
                printf("\x1b[31m");
                printf("Error! Input file name is not specified!\n");
                printf("\x1b[0m");
                return 1;
        }
        
        char base[32] = "gcc -o ";
        char space[1] = " ";
        char matubi[4] = ".out";
        strcat(base,argv[1]);
        strcat(base,".out");
        strcat(base," ");
        strcat(base,argv[1]);
        printf("\x1b[32m");
        printf("\x1b[1m");
        printf("exec:%s \n",base);
        printf("\x1b[0m");
        system(base);//exec:gcc

        return 0;
}

