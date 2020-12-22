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
        len = strlen(argv[i]) + 1; sum += len;
        sum++;
 }  
    aggrigated = (char *) malloc(sum);
    // printf("sum of characters with space and=%d\n",sum);
    for (i=1; i < argc; i++) {
        strcat(aggrigated, argv[i]);
        strcat(aggrigated, " ");
 }  
    // printf("agrigated=%ld\n",strlen(aggrigated));
    if (argc < 2 ){
        printf("Error, string missing\n");
    }
    else
    {
        printf("You enterd: %s\n",aggrigated);
        printf("Reversed: %s\n",reverse(aggrigated));
        
    }    
}