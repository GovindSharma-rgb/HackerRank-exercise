/*You are given two integers a and b.
Your task is to determine whether they share the same last digit.

Bonus Challenge: Try approach of not using modulo operator.

Input Format

Two space separated integers: {a} {b}

Constraints

0 ≤ a, b ≤ 10^9
Output Format

You must print: "YES" or "NO"

*/
// ----------------------------------------------------Answer--------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long a, b;
    scanf("%lld %lld", &a, &b);
    int lastA= a-(a/10)*10;
    int lastB= b-(b/10)*10;
    
    if (lastA == lastB){
        printf("YES");
    }
        
    
    else {
        printf("NO");
    }
        
    
    
    return 0;
}
