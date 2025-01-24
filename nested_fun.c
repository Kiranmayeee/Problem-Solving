//Evaluating nested functions

#include <stdio.h>
int nest(int n){
    if(n>100) 
       return n-10;
    return nest(nest(n+15));
}
int main() {
    printf("Result:%d",nest(100));
    return 0;
}
