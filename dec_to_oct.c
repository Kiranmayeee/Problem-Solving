write a program to convert decimal to octal number

#include<stdio.h>
void dec_to_oct(int n){
    if(n>7){
        dec_to_oct(n/8);
    }
    printf("%d",n%8);
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);         
    dec_to_oct(n);    
}
