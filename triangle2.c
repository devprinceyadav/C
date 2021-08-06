#include<stdio.h>
#include<math.h>
float main(){
    float a,b,c,d,area;
    printf("enter the length of sides a,b and d:\n");
    scanf("%f%f%f",&a,&b,&d);

    c= sqrt(a*a+b*b-2*a*b*cos(d));
    printf("c=%f\n",c);

   area=1/2*a*b*sin(d);
   printf("area of triangle=%d",area);

}