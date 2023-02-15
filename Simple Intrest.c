
#include <stdio.h>
#include<math.h>
void main()
{ float P,R,T,SI;
 printf("Enter the Principle amount: ");
 scanf("%f",&P);
 printf("Enter the Rate: ");
 scanf("%f",&R);
 printf("Enter the Time: ");
 scanf("%f",&T);
 SI= (P*R*T)/100;
 printf("Simple Intrest: %f",SI);
}
