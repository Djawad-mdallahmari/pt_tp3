#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int returnVal = 0;
	if(argc == 2){
        int arg1 = atoi(argv[1]);
        int mask, temp, value[8]; //Afficher les 8 bits

        for (int i = 0; i < 8; i++)
        {
            mask = 1 << i;
            temp = arg1 & mask;
            value[i] = temp>0? 1:0;
        }

        for (int i = 7; i >= 0; i--)
        {
            printf("%d", value[i]);
        }
        printf("\n");


    }else if(argc < 2){
        printf("too less argument\n");
        returnVal = -1;
    }else{
        printf("too much argument\n");
        returnVal = -1;
    }

	return returnVal;
}