/*Given two integers, extract their last digits and print the sum of those digits.

Important Instructions

Do NOT write the entire logic in main().
Write a function int sumLastDigits(int a, int b) and call it from main().
Input Format

Two integers: {a} {b}

Constraints

0 ≤ a, b ≤ 10⁹
Output Format

Single line printing the result as: The sum of last digits is: {res}*/
// -------------------------------------------Answer------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumLastDigits(int a, int b){
    int lasta= a % 10;
    int lastb= b % 10;
    return lasta + lastb;
    
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    
    int result =sumLastDigits(a,b);
    
    printf("The sum of last digits is: %d", result);

    
    return 0;
}
