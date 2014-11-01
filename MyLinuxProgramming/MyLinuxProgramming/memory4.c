//
//  memory4.c
//  MyLinuxProgramming
//
//  Created by ishi on 2014/11/01.
//  Copyright (c) 2014年 zdc. All rights reserved.
//

#include <stdlib.h>
#include "memory4.h"

#define ONE_K (1024)

int memory4() {
    
    char *some_memory;
    char *scan_ptr;
    
    some_memory = (char *)malloc(ONE_K);
    if (some_memory == NULL) exit(EXIT_FAILURE);
    
    scan_ptr = some_memory;
    while (1) {
        *scan_ptr = '8';
        scan_ptr++;
    }
    exit(EXIT_SUCCESS);
}