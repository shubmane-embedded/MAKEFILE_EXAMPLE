/*
 * @Info - lib header file
 */
#include <stdio.h>

/*
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