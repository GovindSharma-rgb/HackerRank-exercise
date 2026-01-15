/*Aman has three sticks and wants to classify the shape he can form by connecting their ends. The classification is based on the following rules:

The shape(triangle) is classified as:

Equilateral: All three sticks are of the same length.
Isosceles: Exactly two sticks are of the same length.
Scalene: All three sticks have different lengths.
However, if the sticks cannot be connected to form a triangle due to their lengths, it is classified as an Invalid shape.

Aman needs a program that will take the lengths of the three sticks as input, validate if they can form a valid closed shape, and output the correct classification.

Input Format

Three space-separated integers (a,b,c) representing the lengths of the sticks.

Constraints

1 <= a, b, c <= 10^6

Output Format

Print 3 different messages based on the input:

Lengths of the Sticks:
"Lengths: [a, b, c]"
Triangle Type:
"Type: Equilateral"
"Type: Isosceles"
"Type: Scalene"
"Type: Invalid"
Shape Characteristics:
"All sides are of the same length."
"Exactly two sides are equal."
"All sides are of different lengths."
"Cannot form a valid shape."
*/
// ------------------------------------------------Answer----------------------------------------------------

#include <stdio.h>

int main() {

    int a;
    int b;
    int c;
    char type;
   
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
    if ((a == b) && (b== c))
    {
        type='e';
    }
    else if (a == b || b==c || c==a)
    {
        type='i';
    }
    else 
    {
        type='s';
    }
    
    if(a+b>c && a+c>b && b+c>a)
    {
        if(type=='e')
        {
            printf("Lengths: [%d, %d, %d]\nType: Equilateral\nAll sides are of the same length.", a,b,c);
        }
        else if(type=='i')
        {
            printf("Lengths: [%d, %d, %d]\nType: Isosceles\nExactly two sides are equal.", a,b,c);
        }
        else if(type=='s')
        {
            printf("Lengths: [%d, %d, %d]\nType: Scalene\nAll sides are of different lengths.", a,b,c);
        }
    }
    }
    else
    {
        printf("Lengths: [%d, %d, %d]\nType: Invalid \nCannot form a valid shape.", a,b,c);
    }
    return 0;
}