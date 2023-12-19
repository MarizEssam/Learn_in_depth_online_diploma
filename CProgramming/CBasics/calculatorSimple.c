#include <stdio.h>

int main()
{
    float x, y, result;
    char c;

    printf("Please Enter an operator: ");
    scanf("%c", &c);
    printf("Enter two operands: ");
    scanf("%f %f", &x, &y);
    switch (c)
    {
    case '*':
        result = x*y;
        break;
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '/':
        result = x / y;
        break;
    }
    printf("%f %c %f = %f", x, c, y, result);

    return 0 ;
}