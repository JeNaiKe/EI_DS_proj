#include "errors.h"
#include <stdio.h>

#define ERRORFILENAME "logs.txt"

// "a" Appends to a file. Writing operations, append data at the end of the file. The file is created if it does not exist.
// Should never be deleted
void carregarError(char *line, char *errMsg) {
    
    FILE *f = fopen(ERRORFILENAME, "a");
    if (f == NULL) {
        printf("Error opening Error file!\n");
        exit(1);
    }
    fprintf(f, "%s: %s\n", line, errMsg);
    fclose(f);

    return;
}