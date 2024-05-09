#include <stdio.h>

void charTests(){
    char str[2];
    str[0] = 65;
    str[1] = 'B';
    str[2] = '\0';
    str[0] = '\0'; // "clears" the string
    printf("%s", str);
}

// stdio.h
int fileReader(){
    FILE *fp;
    char str[60];

    /* opening file for reading */
    fp = fopen("file.txt" , "r");
    if(fp == NULL) {
        perror("Error opening file");
        return(-1);
    }
    if( fgets (str, 60, fp)!=NULL ) {
        /* writing content to stdout */
        puts(str);
    }
    fclose(fp);
    return(0);
}