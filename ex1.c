#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	if(argc >1){
        for (int i = argc-1; i > 0; i--)
        {
            char * arg = argv[i];
            for (int j = strlen(arg); j >= 0; j--)
            {
                printf("%c", arg[j]);
            }
            printf("\n");
        }
    }else{
        printf("no argument\n");
        exit(0);
    }

	return 0;
}