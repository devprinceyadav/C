#include<stdio.h>
#include<math.h>
float main(){
float area,s,a,b,c;
printf("enter the sides of the triangle:\n");
scanf("%f%f%f",&a,&b,&c);

s=(a+b+c)/2;

area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%f\n",area);

return 0;
}


