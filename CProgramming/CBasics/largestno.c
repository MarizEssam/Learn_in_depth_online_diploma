#include <stdio.h>
#include <stdlib.h>

int main(){
float x,y,z;
printf("Enter e nmbers:");
fflush(stdout); 
fflush(stdin);
scanf("%f" , &x);
scanf("%f" , &y);
scanf("%f" , &z);

printf("%f \n", x );
printf("%f \n", y );
printf("%f \n", z );

if (x>y)  {
    if (x>z){
        printf("Largest number = %f" , x);
    }
    else
        printf("Largest number = %f" , z);
}

else{
    if (y>z){
        printf("Largest number = %f" , y);
    }
    else{
        printf("Largest number = %f" , z);
    }
    
}
return 0;
}