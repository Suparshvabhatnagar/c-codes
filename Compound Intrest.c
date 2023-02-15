#include <stdio.h>
#include <math.h>
void main()
{
    float p,r,t,c;
    printf("Enter the principle: ");
    scanf("%f",&p);
    printf("Enter the rate: ");
    scanf("%f",&r);
    printf("Enter the time: ");
    scanf("%f",&t);
    c=p*pow(1+r/100,t);
    printf("%f",c);

}
