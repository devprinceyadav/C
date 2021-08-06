#include<stdio.h>
#include<math.h>
float main(){
    float a,b,c,x,x1,x2;
    printf("Enter the value of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);

    x = b*b-4*a*c;
    if(x>0)
    {
     x1=(-b+sqrt(x))/2*a;
     x2=(-b-sqrt(x))/2*a; 
     printf("x1=%f and x2=%f",x1,x2);
    }
  else
        x1=(-b+sqrt(x))/2*a;
        x2=(-b-sqrt(x))/2*a; 
        printf("x1=%f and x2=%f",x1,x2);

        

}