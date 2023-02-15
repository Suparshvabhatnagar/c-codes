#include <stdio.h>
void main()
 { float r,dia,circum, area;
    printf("Enter the Radius &r\n");
    scanf("%f",&r);
    dia=2*r;
    printf("Diameter=%f",dia);
    circum=2*3.14*r;
    printf("Circumference = %f",circum);
    area = r*r*3.14;
    printf("Area =%f",area);  

    }
