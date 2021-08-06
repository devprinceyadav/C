#include<stdio.h>
int main(){
    int a1,a2,b1,b2,c1,c2,d,dx,dy,x,y;
    printf("enter a1,b1 and c1 of a1x+b1y=c1\n");
    scanf("%d%d%d",&a1,&b1,&c1);
    printf("enter a2,b2 and c2 of a2x+b2y=c2\n");
    scanf("%d%d%d",&a2,&b2,&c2);
        d=a1*b2-a2*b1;
       printf("d=%d\n",d);

        dx=c1*b2-c2*b1;
       printf("dx=%d\n",dx);
    dy=a1*c2-a2*c1;
    printf("dy=%d\n",dy);

 if(x=dx/d)
    printf("%d\n",x);
    if(y=dy/d)
    printf("%d\n",y);
}