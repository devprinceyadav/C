#include<stdio.h>
int main(){
    int a,b,c,total;
     printf("enter the angle of a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
  total=a+b+c;
    if(total=180 )
    {
      printf("angle is right angle");
    }
       else{
           printf("angle is not right angle");
       }
}