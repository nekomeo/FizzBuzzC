//
//  main.c
//  Assignment 1: FizzBuzz
//
//  Created by Elle Ti on 2017-04-25.
//  Copyright © 2017 Elle Ti. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int n = 1; n <= 100; n++)
    {
        if (n % 3 == 0 && n % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (n % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (n % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", n);
        }
    }
    
    return 0;
}
