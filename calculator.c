#include<stdio.h>
int main(){
 int a,b,sum,sub,mul,div;
 char operator;
 printf("enter operator:");
 scanf("%c",&operator);
printf("enter two operands:");
scanf("%d%d",&a,&b);
switch(operator)
{
 case'+':
     sum=a+b;
     printf("sum=%d",sum);
     break;
case'-':
     sub=a-b;
     printf("sub=%d",sub);
     break;
case'*':
     mul=a*b;
     printf("mul=%d",mul);
     break;
case'/':
    div=a/b;
    printf("div=%d",div );
    break;
default:
   printf("plsease select the right operator");
   break;
}
printf("\nresult declear");
}