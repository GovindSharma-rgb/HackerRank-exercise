/*You are given two integers h and m, representing time in 24-hour format:

h → Hour (0 to 23)
m → Minutes (0 to 59)
Your task is to convert this time into 12-hour format and print the result in the form:

{hh}:{mm} AM/PM - where hh and mm are converted hours and minutes double digit formats
Conversion Rules

00:00 to 11:59 → AM
12:00 to 23:59 → PM
In 12-hour format:

00 hours → 12 AM
12 hours → 12 PM
13–23 hours → 1-11 PM
Minutes must always be printed as given (including leading zeros when necessary).

Input Format

Two space-separated integers: {h} {m}

where

h is the hour
m is the minutes
Constraints

0 ≤ h ≤ 23
0 ≤ m ≤ 59
Output Format

Print the converted time in 12-hour format as:

{hh}:{mm} AM/PM , where hh and mm are converted hour and minute double digit formats*/
// ----------------------------------------------------Answer--------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h,m;
    scanf("%d %d",&h,&m);
    if(h==0){
        if(m<10){
            printf("12:0%d AM",m);
        }
        else{
            printf("12:%d AM",m);
        }
    }
    else if(h<12){
        if(m<10){
            printf("%d:0%d AM",h,m);
        }
        else{
            printf("%d:%d AM",h,m);
        }
    }
    else if(h==12){
        if(m<10){
            printf("12:0%d PM",m);
        }
        else{
            printf("12:%d PM",m);
        }
    }
    else if(h<24){
        if(m<10){
            printf("%d:0%d PM",h-12,m);
        }
        else{
            printf("%d:%d PM",h-12,m);
        }
    }
        
    return 0;
}
