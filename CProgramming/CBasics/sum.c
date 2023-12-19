#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n ;
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d" , &n);
    for (i=1; i<=n ; i++){
        //printf("%d" , i);
        sum += i;
    }
    printf("Sum = %d" , sum);
    return 0;
}