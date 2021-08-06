#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value a,b and c:");
    scanf("%d%d%d",&a,&b,&c);

    if((a>=b) && (a>=c))
    {
        if(b>=c)
           {
               printf("the descending order\n: %d %d %d",a,b,c);
           }
      else
           {
              printf("the descending order\n:%d %d %d",a,c,b);
           }

    }
   if((b>=a) && (b>=c))
    {
        if(a>=c)
         {
             printf("the descending order\n: %d %d %d",b,a,c);
         }
       else{
           printf("the descending order\n: %d %d %d",b,c,a);
       }  
    }
    if((c>=a) && (c>=b))
    {
        if(a>=b)
         {
             printf("the descending order\n: %d %d %d",c,a,b);
         }
         else{
             printf("the descending order\n:%d %d %d",c,b,a);
         }
    }
    
}