#include<stdio.h>
int main() {
    int a,b,c;
  printf("enter the value of a ,b and c:\n");
  scanf("%d%d%d",&a,&b,&c);

  if(a>b && a>c)
      printf("largest number=%d\n",a);

    else if (b>a && b>c)
      printf("largest number=%d\n",b);

      else
      printf("largest number=%d\n",c);

}  