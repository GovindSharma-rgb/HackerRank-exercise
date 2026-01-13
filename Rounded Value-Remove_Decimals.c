/*Write a program that takes a floating-point number and prints it without decimal values.

Input Format

Single float.

Constraints

N/A

Output Format

Single line printing the result as: Rounded Value = {value}*/
// ---------------------------------------Answer------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float n;
    scanf("%f",&n);
    int res= (int)n;
    printf("Rounded Value = %d",res);
    return 0;
}
