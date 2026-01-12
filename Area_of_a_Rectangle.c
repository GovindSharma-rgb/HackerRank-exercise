/*You are given the length and width of a rectangle.
Your task is to calculate and print its area using a separate function, not inside main().

Important Instructions

Do NOT write the entire logic in main().
Create a separate function int area(int length, int width) and call it from main().
Input Format

Two integers: {length} {width}

Constraints

1 ≤ length ≤ 10⁶
1 ≤ width ≤ 10⁶
Output Format

Single line printing the result as:

The area is: {res} units*/

// ----------------------------------------------Answer--------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

   int area(int length, int width){
      int total=length*width;
       return total;
}      
     
   int main(){
       int l, w;
       scanf("%d %d", &l, &w);
       int result= area(l,w);
       printf("The area is: %d units", result);
       
        return 0  ;
       
       }
         
      
      
    
   
    

