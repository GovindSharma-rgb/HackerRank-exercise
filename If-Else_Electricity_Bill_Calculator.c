/*A user consumes a certain number of electricity units, and the electricity bill is calculated as follows:

For units ≤ 100: The rate is ₹5 per unit.
For units > 100 and ≤ 300: The rate is ₹7 for the remaining units.
For units > 300: The rate is ₹10 for units above 300.
Additionally, if the total bill amount is ₹1,200 or less, a 10% discount is applied to the bill.

Write a program to compute the total electricity bill based on the given number of units and handles invalid input as well.

Input Format

A single integer n representing the number of electricity units consumed.
Constraints

−10^6 ≤ n ≤ 10^6

Output Format

If the input is invalid, print, "Invalid Input!"
Otherwise, print the total electricity bill after applying the discount, rounded to two decimal places, "The electricity bill is: [amount].""
*/
// ------------------------------------------------Answer-------------------------------------------------

#include <stdio.h>

int main() {

    int unit;
    float bill;
    scanf("%d",&unit);
    
    int flag = 0;
    
    if (unit<=100 && unit>=0) 
    {
        bill = (unit*5) - (unit*5)*0.1;
    }
    else if(unit>100 && unit<=300)
    {
        bill = 100*5 + (unit-100)*7;
        
        if(bill<=1200){
            bill = bill - bill*0.1;;
        }
        else{
            bill = bill;
        }
    
    }
    else if(unit>300){
        bill = 100*5 + 200*7 + (unit-300)*10;
    }
    else{
        flag = 1;
        printf("Invalid Input!");
    }
    
    if(flag==0){
    printf("The electricity bill is: %.2f.", bill);
    }
    
    return 0;
}