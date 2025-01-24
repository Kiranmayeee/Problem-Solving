//Tail recursion

#include <stdio.h>
void head(int n){
    if(n==0) return;
    printf("%d\n",n);
    head(n-1);
}
int main(){
    head(7);
}
