/*
 * main.c
 *
 *  Created on: 16 Dec 2023
 *      Author: Mariz
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	fflush(stdin);
//	a = a+b;
//	b = a - b;
//	a = a - b;
	a = a*b;
	b= a/b;
	a= a/b;
	printf("After swapping, value of a = %f \n"  , a);
	printf("After swapping, value of b = %f" , b);

}

