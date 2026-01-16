/*You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.

*/
// ----------------------------------------------Answer--------------------------------------------------------

#include <stdio.h>

int main() {

   int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
    int i1,r1,i2,r2,i3,r3;

  
    scanf("%d %d %d %d %d %d %d %d %d %d",&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9);

    
    scanf("%d %d", &i1, &r1);
    scanf("%d %d", &i2, &r2);
    scanf("%d %d", &i3, &r3);

 
    if(i1==0) a0=(a0+r1)%10;
    if(i1==1) a1=(a1+r1)%10;
    if(i1==2) a2=(a2+r1)%10;
    if(i1==3) a3=(a3+r1)%10;
    if(i1==4) a4=(a4+r1)%10;
    if(i1==5) a5=(a5+r1)%10;
    if(i1==6) a6=(a6+r1)%10;
    if(i1==7) a7=(a7+r1)%10;
    if(i1==8) a8=(a8+r1)%10;
    if(i1==9) a9=(a9+r1)%10;

    
    if(i2==0) a0=(a0+r2)%10;
    if(i2==1) a1=(a1+r2)%10;
    if(i2==2) a2=(a2+r2)%10;
    if(i2==3) a3=(a3+r2)%10;
    if(i2==4) a4=(a4+r2)%10;
    if(i2==5) a5=(a5+r2)%10;
    if(i2==6) a6=(a6+r2)%10;
    if(i2==7) a7=(a7+r2)%10;
    if(i2==8) a8=(a8+r2)%10;
    if(i2==9) a9=(a9+r2)%10;

   
    if(i3==0) a0=(a0+r3)%10;
    if(i3==1) a1=(a1+r3)%10;
    if(i3==2) a2=(a2+r3)%10;
    if(i3==3) a3=(a3+r3)%10;
    if(i3==4) a4=(a4+r3)%10;
    if(i3==5) a5=(a5+r3)%10;
    if(i3==6) a6=(a6+r3)%10;
    if(i3==7) a7=(a7+r3)%10;
    if(i3==8) a8=(a8+r3)%10;
    if(i3==9) a9=(a9+r3)%10;

   
    printf("%d %d %d %d %d %d %d %d %d %d",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);

    return 0;
}
   
