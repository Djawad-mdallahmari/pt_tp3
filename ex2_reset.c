#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	if(argc == 3){
        int arg1 = atoi(argv[1]);
        int arg2 = atoi(argv[2]);

        unsigned int mask = 1 << arg2;

        unsigned int value = arg1 & ~mask; // ou exclusif avec l'inverse

        printf("%d\n", value);
    }else if(argc < 3){
        printf("too less argument\n");
        exit(0);
    }else{
        printf("too much argument\n");
    }

	return 0;
}