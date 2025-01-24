//Missing value in range n to n-1

#include <stdio.h>
int left(int n,int a[n]){
    int s=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    return s-sum;
}
int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n],sum=0;
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int res=left(n,a);
    printf("result:%d",res);
    return 0;
}
