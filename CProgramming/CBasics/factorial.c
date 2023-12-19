#include <stdio.h>
int main(){
    int factorial =1;
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if (x<0){
        printf("Error negative number ");
    }
    else if(x==0) {
        printf("factorial = 1");
    }
    else{
        int i;
        for(i=1;i<=x ; i++){
        factorial = factorial * i;
        }
    printf("factorial = %d" , factorial);
    
    }
}