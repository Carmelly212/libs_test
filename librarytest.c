#include <stdio.h>
#include "mycode.h"
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    char *aggrigated;
    int len, sum;
    sum = 0;
    int i=0;
    for (i=1; i < argc; i++) {
        len = strlen(argv[i]);
        sum = len + sum;
 }  
    aggrigated = (char *) malloc(sum + 2);
    
    for (i=1; i < argc; i++) {
        char * space = " ";
        strcat(aggrigated, argv[i]);
        strcat(aggrigated, space);
 }  
    if (argc < 2 ){
        printf("Error, string missing\n");
    }
    else
    {
        printf("You enterd: %s\n",aggrigated);
        printf("Reversed: %s\n",reverse(aggrigated));
        
    }    
}