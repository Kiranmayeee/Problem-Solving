//program to convert decinal to binary number

#include <stdio.h>
void decToBinary(int n) {
    if (n>1) {
        decToBinary(n/2); 
    }
    printf("%d",n%2);
}
int main() {
    int num;
    printf("enter number:");
    scanf("%d",&num);
    printf("Binary equivalent of %d is: ", num);
    decToBinary(num);
    printf("\n");
    return 0;
}
