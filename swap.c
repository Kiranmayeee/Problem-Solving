//Swapping of numbers
#include <stdio.h>
int main() {
   int a,b;
   printf("enter 2 numbers:");
   scanf("%d%d",&a,&b);
   printf("before swap: a=%d,b=%d\n",a,b);
   a=(a+b)-(b=a);
   printf("after swap:a=%d,b=%d\n",a,b);
    return 0;
}


