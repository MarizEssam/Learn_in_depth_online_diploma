/*
 * main.c
 *
 *  Created on: 16 Dec 2023
 *      Author: Mariz
 */


#include <stdio.h>
#include <stdlib.h>

int main(){

	float m,n;
	float product =0;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&m,&n);
	product = m+n;
	printf("Product: %f" , product );
	return 0;
}
