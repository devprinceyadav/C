#include<stdio.h>
#include<math.h>
float main(){
float a,b,c,d,x1,x2;
printf("enter the value of a,b and c:\n");
scanf("%f%f%f",&a,&b,&c);

d=b*b-4*a*c;
printf("d=%f\n",d);
 x1=(-b+sqrt(d)) /2*a;
 x2=(-b-sqrt(d)) /2*a;

 printf("x1=%f and x2=%f\n",x1,x2);


}
