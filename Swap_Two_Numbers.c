/*Write a program to swap two numbers.

Input Format

Two unique integers a and b

Constraints

-10^6 <= a <= 10^6
-10^6 <= b <= 10^6
Output Format

Two lines printing the swapped values of a and b*/

// --------------------------------------Answer----------------------------------------------------

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
     printf("a = %d\n",a);
     printf("b = %d",b);
    
    return 0;
}