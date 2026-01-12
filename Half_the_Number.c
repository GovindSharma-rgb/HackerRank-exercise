/*Write a program that takes an integer as input and print its half value as a floating-point number with 2 decimals.

Input Format

Single integer.

Constraints

Input can be positive or negative integer.
Output should use float division.
Output Format

Print the data in the given format: Half of {num} is {halfValue}

*/
// ------------------------------------------------------Answer----------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    
    scanf("%d",&num);
    
    float halfvalue= num / 2.0;
    printf("Half of %d is %.2f",num,halfvalue);
    
        
    return 0;
}
