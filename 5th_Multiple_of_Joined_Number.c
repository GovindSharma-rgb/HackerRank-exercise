/*You will be given four digits, each from 0–9.
Your task is to combine them into a single 4-digit number in the same order and multiply it by 5 to get the final number.

Important Instructions

Do NOT write the entire logic in main().
Create a function int buildNumber(int a, int b, int c, int d) and call it from main().
Input Format

Four digits: {A} {B} {C} {D}
 
Constraints

0 ≤ each digit ≤ 9
Output Format

Single line printing the result as: The number is: {(ABCD)*5}*/
// -----------------------------------------------Answer----------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int buildNumber(int a,int b,int c,int d) {
   int Number= ((a*1000)+(b*100)+(c*10)+d)*5;
   return Number;
 }
int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("The number is: %d", buildNumber(a,b,c,d));
    
    return 0;
}
