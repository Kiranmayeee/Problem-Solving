// Evaluating indirect recursion

#include <stdio.h>
void fa(int n);
void fb(int n);
void fa(int n){
    if(n<=0) return;
    printf("%d ",n);
    fb(n-1);
}
void fb(int n){
    if(n<=0) return;
    printf("%d ",n);
    fa(n-1);
}
int main() {
    fa(5);
    return 0;
}
