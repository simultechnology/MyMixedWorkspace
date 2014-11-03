//
//  main.c
//  AlgorithmByC
//
//  Created by ishi on 2014/11/03.
//  Copyright (c) 2014年 zdc. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("char : %d ~ %d\n", CHAR_MIN, CHAR_MAX);
    
    printf("signed int : %d ~ %d\n", INT_MIN, INT_MAX);
    printf("unsigned int : 0 ~ %u\n", UINT_MAX);
    
    printf("sizeof(int) : %ld\n", sizeof(int));
    printf("sizeof(int *) : %ld\n", sizeof(int *));
    
    return 0;
}
