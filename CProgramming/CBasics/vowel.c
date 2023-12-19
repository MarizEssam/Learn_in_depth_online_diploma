#include <stdio.h>
#include <stdlib.h>

int main(){

char x;
printf("Enter an alphabet:");
fflush(stdout); 
fflush(stdin);
scanf("%c" , &x);
if (x == 'a'|| x=='e'|| x=='i'|| x=='u' || x == 'o'|| x=='A'|| x=='E'|| x=='I'|| x == 'U'|| x=='O') 
 {
    printf("%c is a vowel" , x);
}
else{
    printf("%c is a constant" , x);
}

return 0;
}