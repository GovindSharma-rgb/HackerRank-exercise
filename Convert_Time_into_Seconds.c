/*You are given hours, minutes, and seconds.
Convert the entire time into total seconds.

Important Instructions

Do NOT write the entire logic in main().
Create a function int toSeconds(int hours, int minutes, int seconds) and call it from main().
Input Format

Three space-separated integers: {hours} {minutes} {seconds}

Constraints

0 ≤ hours ≤ 100
0 ≤ minutes < 60
0 ≤ seconds < 60
Output Format

Single line printing the result as:
Total seconds: {res}*/
// -----------------------------------------------Answer-----------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int toSeconds(int hours, int minutes, int seconds){       
    int total= (hours*3600)+(minutes*60)+seconds;
    return total;        
    }
 int main(){
     int h,m,s;
     scanf("%d %d %d",&h,&m,&s);     
     int result = toSeconds(h, m, s); 
     printf("Total seconds: %d",result);
    return 0;
}
