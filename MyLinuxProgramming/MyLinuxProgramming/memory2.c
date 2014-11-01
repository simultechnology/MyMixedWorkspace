
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "memory2.h"

#define A_MEGABYTE (1024 * 1024)
#define PHY_MEM_MEGS 256 /* this number as required */

int memory2() {
    char *some_memory;
    size_t size_to_allocate = A_MEGABYTE;
    int megs_obtained = 0;
    
    while (megs_obtained < (PHY_MEM_MEGS * 2)) {
        some_memory = (char *)malloc(size_to_allocate);
        if (some_memory != NULL) {
            megs_obtained++;
            sprintf(some_memory, "Hello World");
            printf("%s - now allocated %d Megabytes\n",some_memory, megs_obtained);
        }
        else {
            printf("memory2 is failure\n");
            exit(EXIT_FAILURE);
        }
    }
    exit(EXIT_SUCCESS);
}