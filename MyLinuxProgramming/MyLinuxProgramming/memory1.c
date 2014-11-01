//
//  memory1.c
//  MyLinuxProgramming
//
//  Created by ishi on 2014/11/01.
//  Copyright (c) 2014年 zdc. All rights reserved.
//

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define A_MEGABYTE (1024 * 1024)

int main3() {
    char *some_memory;
    int megabyte = A_MEGABYTE;
    int exit_code = EXIT_FAILURE;
    
    some_memory = (char *)malloc(megabyte);
    
    if (some_memory != NULL) {
        sprintf(some_memory, "Hello World\n");
        printf("%s", some_memory);
        exit_code = EXIT_SUCCESS;
    }
    
    exit(exit_code);
}
