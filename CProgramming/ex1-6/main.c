/*
 * main.c
 *
 *  Created on: 16 Dec 2023
 *      Author: Mariz
 */


#include<stdio.h>
#include<stdlib.h>
int main(){
	float a,b,c;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	fflush(stdin);
	c = a;
	a=b;
	b=c;
	printf("After swapping, value of a = %f \n"  , a);
	printf("After swapping, value of b = %f" , b);

}
