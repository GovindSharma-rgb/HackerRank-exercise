/*In the mystical kingdom of Orlon, there lies an enchanted mirror, renowned for revealing secrets of destiny. However, the mirror tests anyone who dares to stand before it by analyzing a single number. The verdict it delivers is based on a set of ancient rules, but beware—only natural numbers are entertained by the mirror!

A number can hold one of several mystical statuses based on the following conditions:

Condition 1: The number is even and greater than 10.
Condition 2: The number is greater than 15 and a multiple of 3.
Condition 3: The number is a multiple of 7.
The mirror’s verdict is as follows:

If the number satisfies all three conditions, it proclaims the number as "SUPERNATURAL".
If the number satisfies exactly two conditions, it calls the number "MIRACULOUS".
If the number satisfies exactly one condition, it deems the number "MAGICAL".
The number is "NORMAL" if none of the magical conditions are met.
The mirror remains silent for numbers without significance, discarding such attempts with an "INVALID" response.
Your task is to create a program that simulates the enchanted mirror. Based on the input number, the program should output the mirror's verdict.

Input Format

A single integer N, the number provided to the mirror.

Constraints

-10^6 ≤ N ≤ 10^6

Output Format

A single line, "The verdict for the number [N] is: [RESULT]"

*/
// --------------------------------------Answer----------------------------------------------------------------------

#include <stdio.h>

int main() {
    int num;
    int d1,d2,d3;
    d1=d2=d3=0;
    scanf("%d",&num);
    
    if(num>=1)
    { 
    
    if(num%2==0 && num>10)
    {
       d1=1;
    }  
    if (num>15 && num%3==0)
    {
       d2=1;
    }
    if (num%7==0)
    {
        d3=1;
    }
    if(d1 && d2 && d3)
    {
        printf("The verdict for the number %d is: SUPERNATURAL",num);
    }
    else if((d1 && d2) || (d2 && d3) || (d3 && d1))
    {
        printf("The verdict for the number %d is: MIRACULOUS",num);
    }
    else if(d1 || d2 || d3)
    {
        printf("The verdict for the number %d is: MAGICAL",num);
    }
    else 
    {
        printf("The verdict for the number %d is: NORMAL",num);
    }
    }
    else
    {
        printf("The verdict for the number %d is: INVALID",num);
    }
    
        
        
    
    return 0;
}