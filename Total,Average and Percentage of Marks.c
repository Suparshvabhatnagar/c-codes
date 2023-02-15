
#include <stdio.h>
#include<math.h>
void main()
{
  float a,b,c,d,e,tot,avg,per;
  printf("Enter Mark 1 out of 100: ");
  scanf("%f",&a);
    printf("Enter Mark 2 out of 100: ");
  scanf("%f",&b);
    printf("Enter Mark 3 out of 100: ");
  scanf("%f",&c);
    printf("Enter Mark 4 out of 100: ");
  scanf("%f",&d);
    printf("Enter Mark 5 out of 100: ");
  scanf("%f",&e);
  tot=a+b+c+d+e;
  printf("Total Marks=%f\n",tot);
  avg= (tot)/5;
  printf("Average Marks=%f\n",avg);
  per=(tot*100)/500;
  printf("Percentage=%f ",per);
}
