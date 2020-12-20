#include <stdio.h>
#include "mycode.h"

int main (int argc, char *argv[]) {
    if (argc < 2 ){
        printf("Error, string missing\n");
    }
    else
    {
        printf("%s\n",argv[1]);
        printf("%s\n",reverse(argv[1]));
        
    }    
}