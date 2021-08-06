#include<stdio.h>
float main(){
    float area,circumference,r;
    printf("enter the r of circle:\n");
    scanf("%f",&r);

    area= 3.14*r*r;
    printf("area of the circle is=%f\n",area);

    circumference= 2 * 3.14 * r;
    printf("circumference of the circle=%f\n",circumference);
     
     return 0;


}