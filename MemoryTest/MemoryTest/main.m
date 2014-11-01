//
//  main.m
//  MemoryTest
//
//  Created by ishi on 12/06/08.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    id obj = [[NSObject alloc] init];
    printf("init: %d\n", (int)[obj retainCount]);
    [obj retain];
    printf("retain: %d\n", (int)[obj retainCount]);
    [obj retain];
    printf("retain: %d\n", (int)[obj retainCount]);
    
    [obj release];
    printf("release: %d\n", (int)[obj retainCount]);
    [obj release];
    printf("release: %d\n", (int)[obj retainCount]);
    [obj release];
    printf("release: %d\n", (int)[obj retainCount]);
    
    NSString *myName = [[NSString alloc] initWithString:@"I am ishikawa"];
    
    printf("myName length : %d\n", (int) myName.length);
    printf("init: %d\n", (int)[myName retainCount]);
    [myName retain];
    printf("init: %d\n", (int)[myName retainCount]);
    
    return 0;
}

