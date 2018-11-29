#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	if(argc == 3){
        int arg1 = atoi(argv[1]);
        int arg2 = atoi(argv[2]);

        int mask = 1 << arg2;

        int value = arg1 & mask;

        printf("%d\n", value>0? 1: 0);
    }else if(argc < 3){
        printf("too less argument\n");
        exit(0);
    }else{
        printf("too much argument\n");
    }

	return 0;
}