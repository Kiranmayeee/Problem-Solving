//printing prime numbers in the given range

#include <stdio.h>
int prime(int n){
    if(n==0 || n==1) return 0;
    int i=2;
    while(i*i<=n){
        if(n%i==0) return 0;
        i++;
    }
    return 1;
}
int main(){
    int n,m,c=0;
    printf("enter n and m:");
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++){
        if(prime(i)) printf("%d ",i);
    }
}
