/**
 * Copyright (c) 2023
 * All rights reserved.
 *
 * Author - Shubham Mane
 * Date Created - 29 July 2029
 * Last date Modified - 29 July 2029
 * 
 * @brief - main source file
 * @file - main.c
 */

/**
 * @Info - lib header file
 */
#include <stdio.h>

/**
 * @Info - Custom header file
 */
#include "addition.h"
#include "subtraction.h"

int main(void)
{
    int temp = 0;
    temp = addition(2, 2);
    printf("temp - %d\n", temp);
    temp = subtraction(3, 2);
    printf("temp - %d\n", temp);
    return 0;
}

/* End of Code */
