/*Given a 3-digit number ABC, extract and print A, B, and C separately.

Important Instructions

Do NOT write the entire logic in main().
Create a function void split(int n) and call it from main().
Input Format

A single 3-digit integer {ABC}

Constraints

100 ≤ n ≤ 999
Output Format

Single line printing the output as: {A} {B} {C}*/

// ---------------------------------Answer-----------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void split(int n)
{
    int A, B, C;

    A = n / 100;         
    B = (n / 10) % 10;    
    C = n % 10;           

    printf("%d %d %d", A, B, C);
}

int main()
{
    int n;
    scanf("%d", &n);

    split(n);

    return 0;
}