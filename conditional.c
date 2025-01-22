//conditional statements--->if else-if else
#include <stdio.h>
int main() {
   int w;
   printf("enter weight:");
   scanf("%d",&w);
   if(w==0) printf("INVALID INPUT");
   else if(w<=2000) printf("Time:25 minutes");
   else if(w>=2000 && w<=4000) printf("Time:35 minutes");
   else if(w>4000 && w<=7000) printf("Time:45 minutes");
   else printf("OVERLOADED");
    return 0;
}
